def bowling_score(frames):
    score = 0
    for i in range(10):
        if "-" in frames[i * 2:i * 2 + 2]:
            if frames[i * 2:i * 2 + 1] == "X":
                score += 10
            elif frames[i * 2:i * 2 + 2].split("/")[0] == "0" or frames[i * 2:i * 2 + 2].split("/")[1] == "0":
                first_roll = int(frames[i * 2:i * 2].replace("X", ""))
                score += 10
                if i < 9:
                    score += sum([int(x) for x in frames[(i+1)*2:(i+2)*2].split("-")]) - 10
            else:
                first_roll = int(frames[i * 2:i * 2].replace("X", ""))
                second_roll, _ = map(int, frames[i * 2:i * 2 + 2].split("/"))
                score += first_roll + second_roll
        else:
            score += sum([int(x) for x in frames[i*2:(i+1)*2].split("-")])
    return score