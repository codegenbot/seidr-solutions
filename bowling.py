def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            frames_list = list(frames[i * 2 : i * 2 + 2])
            strike = False
            spare = False
            if "X" in frames_list:
                strike = True
            elif len(set(frames_list)) == 1 and set(frames_list)[0] != "/":
                spare = True
            else:
                for j in range(10):
                    if str(j + 1) in frames_list:
                        score += j + 1
        else:
            score += int(frames[i * 2 : i * 2 + 2])
        if strike:
            score += 10 + sum(map(int, frames[2 * i + 2 : 2 * (i + 1)]))
        elif spare:
            score += 10 + int(frames[2 * i + 2])
    return score