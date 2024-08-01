def bowling(score_str):
    score = 0
    frames = score_str.split("/")
    for i in range(10):
        if frames[i] == "X":
            score += 10
            if i < 9:
                score += (
                    sum(map(int, frames[i + 1].replace("X", "10").replace("-", "0")))
                    + sum(map(int, frames[i + 2].replace("X", "10").replace("-", "0")))
                    if frames[i + 1] != ""
                    else 0
                )
        else:
            score += sum(map(int, frames[i].replace("-", "0")))
    return score


score_str = input()
print(bowling(score_str))