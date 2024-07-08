def bowling_score(bowls):
    score = 0
    frames = bowls.split("/")
    for i in range(min(10, len(frames))):
        if frames[i] == "X":
            score += 10 + get_value(frames[i + 1]) + get_value(frames[i + 2])
        else:
            for char in frames[i]:
                score += get_value(char)
    return score


def get_value(char):
    if char == "X":
        return 10
    elif char == "-":
        return 0
    else:
        return int(char)


bowls = input()
print(bowling_score(bowls))