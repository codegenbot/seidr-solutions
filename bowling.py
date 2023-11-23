def calculate_bowling_score(bowls):
    score = 0
    frame_score = 0
    frame_count = 0
    is_strike = False
    is_spare = False
    for bowl in bowls:
        if bowl == "X":
            score += 10
            if frame_count < 9:
                frame_score += 10
                frame_count += 1
                if is_strike:
                    score += 10
                if is_spare:
                    score += 10
                    is_spare = False
                is_strike = True
            else:
                if is_strike:
                    score += 10
                if is_spare:
                    score += 10
                is_strike = True
        elif bowl == "/":
            score += 10 - frame_score
            if frame_count < 9:
                frame_score += 10 - frame_score
                frame_count += 1
                if is_strike:
                    score += 10
                is_spare = True
                is_strike = False
            else:
                if is_strike:
                    score += 10
                is_spare = True
                is_strike = False
        elif bowl == "-":
            if frame_count < 9:
                frame_score += 0
                frame_count += 1
            else:
                pass
        else:
            score += int(bowl)
            if frame_count < 9:
                frame_score += int(bowl)
                if is_strike:
                    score += int(bowl)
                    is_strike = False
                if is_spare:
                    score += int(bowl)
                    is_spare = False
                if frame_score == 10:
                    is_spare = True
                    frame_score = 0
                    frame_count += 1
                else:
                    is_spare = False
            else:
                if is_strike:
                    score += int(bowl)
                    is_strike = False
                if is_spare:
                    score += int(bowl)
                    is_spare = False
    return score


bowls = input()
print(calculate_bowling_score(bowls))