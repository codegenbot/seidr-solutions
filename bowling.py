def bowling(score):
    score = [int(x) for x in re.sub("[^\d/]", "", score)]
    score = score[::2]
    total_score = 0

    for i in range(0, len(score), 2):
        if score[i] == 10:
            total_score += 10 + score[i + 1]
        elif sum(score[i : i + 2]) < 10:
            total_score += sum(score[i : i + 2])
        else:
            bonus = sum(score[i : i + 2]) - 10
            total_score += 10 + bonus

    return total_score