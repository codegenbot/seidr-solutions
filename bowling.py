def bowling_score(score):
    score = score.replace("/", "")
    total_score = 0
    for i in range(0, len(score), 1):
        if score[i].isdigit():
            temp = ""
            while i < len(score) and score[i].isdigit():
                temp += score[i]
                i += 1
            if "-" in temp:
                strikes = temp.count("X")
                spares = int(temp[:-1]) - 10
                total_score += (10 + spares) * (10 - strikes)
            else:
                total_score += int(temp) * 2
        elif score[i] == "X":
            total_score += 30
        else:
            continue
    return total_score