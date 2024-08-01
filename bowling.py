def bowling_score(frames):
    score = 0
    for i in range(len(frames) // 2):
        if frames[2 * i : 2 * i + 1] == "X":
            score += 30
        elif frames[2 * i : 2 * i + 2].isdigit():
            score += int(frames[2 * i : 2 * i + 2])
        else:
            strike = int(frames[2 * i : 2 * i + 2].split("/")[0])
            score += strike
            if i < 9 and (
                frames[4 * i + 1 : 4 * i + 3] == "X"
                or frames[4 * i + 1 : 4 * i + 3].isdigit()
            ):
                score += strike + int(frames[4 * i + 1 : 4 * i + 2].split("/")[0])
            else:
                score += strike
    if len(frames) % 2 != 0 and frames[-1] == "X":
        score += 10
    return score