def bowling_score(bowls):
    score = 0
    bowls = bowls.replace("-", "0")
    bowls = bowls.replace("X", "X/")
    frames = bowls.split("/")

    for i in range(min(10, len(frames) - 2)):
        if frames[i] == "X":
            score += 10 + get_value(frames[i + 1]) + get_value(frames[i + 2])
        else:
            score += sum(get_value(char) for char in frames[i])

    return score


def get_value(char):
    if char == "X" or char == "/":
        return 10
    else:
        return int(char)


bowls = input()
print(bowling_score(bowls))