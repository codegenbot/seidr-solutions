def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2 + i] == "X":
                strike = True
            elif frames[i * 2 + i].isdigit():
                spare = int(frames[i * 2 + i])
            score += 10 + (10 - spare) if strike else spare
        else:
            score += sum(map(int, frames[i * 2 : i * 2 + 2]))
    return score