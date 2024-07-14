def bowling_score(bowling_string):
    score = 0
    for i in range(10):
        if bowled_in_frame(bowling_string[i * 2 : (i + 1) * 2]):
            if i < 9:
                if strike_or_spare(bowling_string[20 : i * 2 + 4]):
                    score += 10 + next_two_balls(bowling_string[i * 2 : (i + 1) * 2])
                else:
                    score += 10
            else:
                score += next_two_balls(bowling_string[i * 2 : (i + 1) * 2])
        elif strike_or_spare(bowling_string[i * 2 : (i + 1) * 2]):
            if i < 9:
                score += 10 + next_two_balls(bowling_string[(i + 1) * 2 : 22])
            else:
                score += 10
    return score


def bowled_in_frame(frame):
    return (
        frame.count("X")
        or sum(map(int, frame.replace("/", "0").replace("X", "0"))) >= 10
    )


def strike_or_spare(frame):
    return (
        frame.count("X") == 2
        or int(frame.replace("X", "0").split("/")[0])
        + int(frame.replace("X", "0").split("/")[-1])
        >= 10
    )


def next_two_balls(frame):
    if "X" in frame:
        return 10
    if "/" in frame:
        return int(frame.split("/")[0]) + int(frame.split("/")[-1])
    return sum(map(int, frame))