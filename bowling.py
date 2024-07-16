```
def bowling(score_string):
    score = 0
    frame = 1
    i = 0
    while i < len(score_string):
        if score_string[i] == "X":
            score += 10
            if i + 2 < len(score_string) and score_string[i+1] == "X" and score_string[i+2] == "X":
                score += 10
            frame += 1
            i += 1
        elif score_string[i].isdigit() and (i + 1 >= len(score_string) or score_string[i+1] == "/"):
            score += int(score_string[i])
            frame += 1
            i += 1
        elif score_string[i].isdigit():
            first_roll = int(score_string[i])
            if i + 2 < len(score_string) and score_string[i+1].isdigit() and score_string[i+2] == "/":
                score += first_roll + 10 - frame
                frame += 1
                i += 2
            else:
                i += 1
                if score_string[i] == "X":
                    score += 10
                    frame += 1
                    i += 1
                elif score_string[i].isdigit():
                    score += first_roll + int(score_string[i])
                    frame += 1
        elif score_string[i] == "/":
            score += 10 - (frame - 1)
            frame += 1
            i += 1
    return score