def bowling_score(bowl_string):
    score = 0
    for i in range(len(bowl_string)):
        if bowl_string[i] == "X":
            score += 10
        elif bowl_string[i] == "/":
            score += 10 - int(bowl_string[i-1])
        else:
            score += int(bowl_string[i])
    return score