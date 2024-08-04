```
def bowling_score(s):
    score = 0
    roll = 0
    for frame in s:
        if frame.isdigit():
            if len(frame) == 1 or (frame[0].isdigit() and frame[1] in '-X'):
                score += int(frame)
                roll += 1
            else:
                first_roll = int(frame[:2])
                if frame[-1] == 'X':
                    score += 10 + 10 - max(int(frame[1:]), 1)
                    roll += 1
                elif '-' in frame:
                    second_roll = int(frame[2:])
                    score += first_roll + min(first_roll, second_roll)
                    roll += 2
                else:
                    score += first_roll
                    if len(s) - s.index(frame) > 0 and s[s.index(frame)+3].isdigit():
                        score += 10
                    roll += 2
    return score