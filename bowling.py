def bowling_score(bowls):
    score = 0
    frames = bowls.split("/")
    for i in range(min(10, len(frames))):
        if frames[i] == "X":
            score += 10 + get_value(frames[i + 1]) + get_value(frames[i + 2])
        elif len(frames[i]) == 2:
            if frames[i][1] == "/":
                score += 10 + get_value(frames[i+1][0])
            else:
                score += get_value(frames[i][0]) + get_value(frames[i][1])
        elif frames[i] == "-":
            score += 0
    return score

bowls = input()
print(bowling_score(bowls))