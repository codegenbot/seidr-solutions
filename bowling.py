def bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    is_spare = False
    is_strike = False
    for bowl in bowls:
        if bowl == "X":
            score += 10
            if frame < 10:
                frame += 1
        elif bowl == "/":
            score += 10 - frame_score
            is_spare = True
        elif bowl == "-":
            pass
        else:
            score += int(bowl)
            frame_score += int(bowl)
            if is_spare:
                score += int(bowl)
                is_spare = False
            if is_strike:
                score += int(bowl)
                is_strike = False
            if frame_score == 10:
                if frame < 10:
                    frame += 1
                is_strike = True
            else:
                is_strike = False
            frame_score = 0
    return score


bowls = input()
print(bowling_score(bowls))