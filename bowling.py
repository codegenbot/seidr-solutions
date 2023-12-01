def calculate_bowling_score(bowls):
    score = 0
    frames = []
    for i in range(10):
        if bowls[0] == 'X':
            frames.append(10)
            bowls = bowls[1:]
        else:
            frame_score = 0
            if bowls[1] == '/':
                frame_score += 10
            else:
                frame_score += int(bowls[0]) + int(bowls[1])
            frames.append(frame_score)
            bowls = bowls[2:]
            
    for i in range(10):
        if frames[i] == 10:
            score += frames[i] + frames[i+1] + frames[i+2]
        else:
            score += frames[i]
            
    return score

bowls = input().strip()
print(calculate_bowling_score(bowls))