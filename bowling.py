def bowling_score(bowls):
    score = 0
    bowls = bowls.replace("-", "0")
    bowls = bowls.replace("X", "X/")
    frames = bowls.split("/")

    for i in range(min(10, len(frames) - 1)):
        if frames[i] == "X":
            if len(frames) > i + 2:
                if frames[i + 1] == "X":
                    score += 20
                else:
                    score += 10 + get_value(frames[i + 1]) + get_value(frames[i + 2])
            else:
                score += 10
        else:
            score += sum(get_value(char) for char in frames[i])

    return score

bowls = input()
print(bowling_score(bowls))