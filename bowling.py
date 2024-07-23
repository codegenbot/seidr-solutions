def bowling_score(s):
    score = 0
    rolls = s.split("/")
    for i in range(10):
        if len(rolls[i]) == 1 or (len(rolls[i]) > 1 and str(rolls[i][0]).isdigit()):
            if len(rolls[i]) > 1:
                score += int(rolls[i][0]) * 2
                if int(rolls[i][1]):
                    score += int(rolls[i][1])
            else:
                score += int(rolls[i])
        elif rolls[i] == "X":
            score += 10 + (9 - i) * 10 if i < 8 else 10
        elif len(rolls[i]) > 2 and str(rolls[i][0]).isdigit():
            if int(rolls[i][0]) * 2 <= 10:
                score += int(rolls[i][0]) * 2
                score += int(rolls[i][1])
            else:
                score += int(rolls[i])
        elif len(rolls[i]) > 2 and str(rolls[i][0]).isdigit() == False:
            if len(rolls[i]) > 3:
                score += 10 + (9 - i) * 10 if i < 8 else 10
    return score