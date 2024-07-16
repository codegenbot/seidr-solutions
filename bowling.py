def bowling_score(frames):
    score = 0
    for i in range(10):
        if "-" in frames[i * 2:i * 2 + 2]:
            first_roll = int(frames[i * 2].replace("-", ""))
            second_roll = int(frames[i * 2 + 1].replace("-", ""))
            if first_roll == 10:
                score += 10
                if i < 8:
                    score += sum(map(int, frames[2*i+2:2*i+4].split("/")))
            elif "/" in frames[i*2:i*2+2]:
                score += min(first_roll, int(frames[i*2+1].replace("-", ""))) + max(0, first_roll + int(frames[i*2+1].replace("-", "")) - 10)
            else:
                score += first_roll + second_roll
        elif "X" in frames[i * 2:i * 2 + 1]:
            score += 10
            if i < 8:
                score += sum(map(int, frames[2*i+2:2*i+3].split("/")))
        else:
            score += int(frames[i*2]) + int(frames[i*2+1])
    return score