```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            score += int(char)
            if frame < 10 and (int(char) == 10 or int(char) + 1 > 10):
                spare = 10 - int(char)
                if frame < 9:
                    if '/' in frames[frame:]: 
                        score -= spare
                    else:
                        score -= spare - int(frames[frame])
                elif frame == 9 and '/':
                    score -= spare
                else:
                    score -= spare - 5
                frame += 1
        elif char == '/':
            score += 10
            if frame < 9:
                if '/' in frames[frame:]: 
                    return 'Invalid input'
                else:
                    score += int(frames[frame])
            frame += 1
    return score