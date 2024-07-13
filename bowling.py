def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike, spare = map(int, frames[i * 2 : i * 2 + 2].split("/"))
            if i < 9:
                score += strike + 10 + sum(map(int, frames[: i * 2]))
            else:
                score += strike
        elif frames[i * 2] == "X":
            score += 10 + sum(map(int, frames[: i * 2]))
        else:
            frame_score = int(frames[i * 2]) + int(frames[i * 2 + 1])
            if i < 9 and frame_score == 10:
                score += 10 + sum(map(int, frames[: i * 2]))
            elif i < 9:
                score += frame_score
    return score