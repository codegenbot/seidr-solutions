def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    is_strike = False
    is_spare = False
    frame_score = 0

    for bowl in bowls:
        if bowl == "X":
            score += 10
            if frame < 10:
                score += 10
                if is_strike:
                    score += 10
                if is_spare:
                    score += 10
                    is_spare = False
                is_strike = True
                frame += 1
        elif bowl == "/":
            score += 10 - frame_score
            if frame < 10:
                score += 10 - frame_score
                if is_strike:
                    score += 10
                is_spare = True
                is_strike = False
            frame_score = 0
            frame += 1
        elif bowl == "-":
            frame_score += 0
        else:
            frame_score += int(bowl)
            if is_strike or is_spare:
                score += int(bowl)
            if frame_score == 10:
                is_spare = True
            else:
                is_spare = False
            is_strike = False
            if is_strike or is_spare:
                frame += 1
                frame_score = 0
            if frame < 10:
                frame += 1

    return score


bowls = input()
print(calculate_bowling_score(bowls))