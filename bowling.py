```
def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10
            frame_roll = [int(frames[2*i+1])]
            while frame_count < 9:
                if frames[2*frame_count+1].startswith('X'):
                    score += 10
                    frame_roll.append(10)
                else:
                    frame_roll.append(int(frames[2*frame_count+1]))
                frame_count += 1
            score += sum(frame_roll) + (frame_count >= 10 and 1 or 0)
        elif frames[i] == '/':
            frame_roll = list(map(int, frames[i+1].split()))
            score += 11
            while len(frame_roll) < 2:
                if frame_count < 9:
                    next_roll = int(frames[2*frame_count+1])
                    if next_roll == 10:
                        score += 10 + sum(frame_roll)
                        break
                    else:
                        score += next_roll
                        frame_roll.append(next_roll)
                else:
                    score += 10
                    break
        else:
            frame_rolls = list(map(int, frames[i:i+2]))
            if sum(frame_rolls) == 10:
                score += 11
            else:
                score += sum(frame_rolls) + (frame_count < 9 and 1 or 0)
        frame_count += 1
    return score