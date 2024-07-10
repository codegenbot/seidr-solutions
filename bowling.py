```
def bowling_score(score):
    score_list = [int(x) if x.isdigit() else 0 for x in score]
    total = 0
    frame = 0
    while frame < len(score_list):
        if score_list[frame] == 10:
            total += 10 + (10 if frame+1 < len(score_list) and score_list[frame+1] != 0 else 0)
            frame += 2
        elif score_list[frame:frame+2].count(str(10)) > 0:
            if score_list[frame:frame+2].count(str(10)) == 2:
                total += 20 + (score_list[frame+2] if frame+3 < len(score_list) and score_list[frame+3] != 0 else 0)
            else:
                total += 10 + score_list[frame+1]
            frame += 2
        elif score_list[frame] + score_list[frame+1] == 10:
            total += 10
            frame += 2
        else:
            total += score_list[frame] + score_list[frame+1]
            frame += 2
    return total