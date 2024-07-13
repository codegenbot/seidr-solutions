def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2] == "X":
                strike = True
            elif frames[i * 2 : i * 2 + 2].count("/") == 1:
                spare = True
            else:
                score += min(int(frames[i * 2]), int(frames[i * 2 + 1]))
        else:
            if frames[i * 2] == "X":
                score += 10 + (10 - int(frames[i * 2 + 1])) if i < 9 else 10 + 10
                strike = True
            elif frames[i * 2 : i * 2 + 2].count("/") == 1:
                score += 10 + min(int(frames[i * 2]), int(frames[i * 2 + 1]))
                spare = True
            else:
                score += sum(map(int, frames[i * 2 : i * 2 + 2]))
        if strike and i < 9:
            score += 10 + bowling_score(frames[18:])[0]
        elif spare and i < 9:
            score += 10 + bowling_score(frames[19:])[0][0]
    return [
        score,
    ]