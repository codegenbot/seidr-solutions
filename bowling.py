````
def bowling_score(frames):
    score = 0
    frame_num = 1
    for char in frames:
        if char.isdigit():
            if len(char) == 2:
                first_roll = int(char[0])
                second_roll = int(char[1])
                if first_roll + second_roll == 10:
                    score += 10
                else:
                    score += first_roll + second_roll
                frame_num += 1
            else:
                score += int(char)
                frame_num += 1
        elif char == '/':
            score += 10
            frame_num += 1
        elif char == 'X':
            if frame_num < 10:
                score += 10 + (int(frames[frames.index(char)+1].replace('/','0').replace('X','0').replace('-','0')) or 0)
            else:
                score += 10
            frame_num += 1
        elif char == '-':
            continue
    return score