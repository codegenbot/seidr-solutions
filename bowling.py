```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames.split("/")):
        frame = frames.split("/")[i]
        if len(frame) == 1: 
            if int(frame) == 10:
                score += 10
                roll = 1
            else:
                score += int(frame)
                roll = 2
        elif len(frame) == 2: 
            first_roll, second_roll = map(int, frame.split())
            if first_roll == 10:
                score += 10 + (second_roll if second_roll != 0 else 10)
                roll = 1
            elif second_roll == 10:
                score += 10 + first_roll
                roll = 2
            else: 
                score += first_roll + second_roll
                roll = 2
        elif len(frame) == 3: 
            first_roll, second_roll, third_roll = map(int, frame.split())
            if first_roll == 10:
                score += 10 + first_roll + (third_roll if third_roll != 0 else 0)
                roll = 1
            elif second_roll == 10 or third_roll == 10:
                if second_roll == 10 and third_roll != 0:
                    score += 10 + 10
                    roll = 2
                elif third_roll == 10:
                    score += first_roll + 10
                    roll = 1
                else: 
                    score += first_roll + 10
                    roll = 2
            else: 
                score += first_roll + second_roll + third_roll
                roll = 3

        i += 1

    return score