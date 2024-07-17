def bowling_score(games):
    score = 0
    frame = []
    for char in games:
        if char.isdigit():
            frame.append(int(char))
        else:
            if len(frame) == 1 and int("".join(map(str, frame))) < 10:
                score += sum(frame)
            elif len(frame) == 2 and int("".join(map(str, frame))) >= 10:
                if int("".join(map(str, frame))) == 10:
                    score += 10 + sum(bowling_score(games[games.index(char) + 1 :]))
                else:
                    score += int("".join(map(str, frame))) + sum(
                        bowling_score(games[games.index(char) + 2 :])
                    )
            frame = []
    if len(frame) == 3 and int("".join(map(str, frame))) == 10:
        return [score] + bowling_score(games[1:])
    elif len(frame) == 3:
        score += sum(frame)
    return [score]