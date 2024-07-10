def bowling_score(bowling_string):
    score = 0
    rolls = [
        list(map(int, list(x))) for x in re.findall("(\d{1,3})/?|[X]", bowling_string)
    ]

    for i in range(len(rolls)):
        if len(rolls[i]) == 2:
            if sum(rolls[i]) == 10:
                score += 10 + sum(rolls[i + 1 : i + 2] or [0])
                i += 1
            else:
                score += sum(rolls[i])
        elif rolls[i][0] == X:
            score += 10 + sum(rolls[i + 1 :] or [0])
        else:
            score += sum(rolls[i])
    return score