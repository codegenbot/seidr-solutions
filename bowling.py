def bowling_score(bowls):
    score = 0
    frames = bowls.split("/")
    for i in range(min(len(frames), 10)):
        if frames[i] == "X":
            score += 10 + get_value(bowls[i + 1]) + get_value(bowls[i + 2])
        elif len(frames[i]) == 2:
            score += get_value(frames[i][0]) + get_value(frames[i][1])
        elif frames[i] == "-":
            score += 0
    return score

def get_value(char):
    if char == "X":
        return 10
    elif char == "-":
        return 0
    elif char == "/":
        return 10
    else:
        return int(char)

bowls = input()
print(bowling_score(bowls))