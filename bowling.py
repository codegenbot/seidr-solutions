def bowling_score(bowls):
    score = 0
    bowls = bowls.replace("X", "X/") + "00"
    frames = bowls.split("/")

    for i in range(min(10, len(frames))):
        if frames[i] == "X":
            score += 10 + get_value(frames[i + 1]) + get_value(frames[i + 2])
            if frames[i + 1] == "X":
                score += get_value(frames[i + 2])
        else:
            frame_score = sum(get_value(char) for char in frames[i])
            if "/" in frames[i]:
                score += 10 + get_value(frames[i + 1][0])
                i += 1
            else:
                score += frame_score

    return score

bowls = input()
print(bowling_score(bowls))