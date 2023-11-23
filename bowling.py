def calculate_spare_bonus(bowls, bowl_index):
    bonus = 0
    next_bowl = bowls[bowl_index + 1]
    if next_bowl.isdigit():
        bonus += int(next_bowl)
    return bonus


def calculate_score(bowls):
    score = 0
    i = -1
    for bowl in bowls:
        i += 1
        if bowl == "/":
            score += 10 + calculate_spare_bonus(bowls, i)
        elif bowl == "X":
            score += 10
            if i + 2 < len(bowls):
                if bowls[i + 1] == "-":
                    score += int(bowls[i + 2])
                elif bowls[i + 2] == "/":
                    score += 10
                else:
                    score += int(bowls[i + 1]) + int(bowls[i + 2])
        elif bowl.isdigit():
            score += int(bowl)
    return score