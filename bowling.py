```
def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if frame_count < 9:
                roll1 = [10]
                if frame_count < 8:
                    score += 20
                elif frame_count == 8 and frames[18] != 'X':
                    roll1.append(int(frames[2*9+1]))
                    score += 10 + sum(roll1)
            else:
                roll1 = [int(frames[i+1])]
                if roll1[0] == 10:
                    score += 20
                else:
                    score += 10 + roll1[0]
            frame_count += 1
        elif frames[i] == '/':
            frame_roll = list(map(int, frames[i+1].split()))
            if sum(frame_roll) == 10:
                score += 11
            else:
                score += 10 + max(frame_roll)
            while len(frame_roll) > 0 and sum(frame_roll) < 10:
                score += frame_roll.pop(0)
        else:
            frame_rolls = list(map(int, frames[i:i+2]))
            if sum(frame_rolls) == 10:
                score += 11
            else:
                score += sum(frame_rolls) + (frame_count < 9 and 1 or 0)
            while len(frame_rolls) > 1 and sum(frame_rolls[:-1]) < 10:
                score += frame_rolls.pop(0)
        frame_count += 1
    return score