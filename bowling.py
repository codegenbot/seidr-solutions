```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i * 2] == "X":
            score += 10 + sum(map(int, frames[(i+1)*2:(i+3)*2]))
        elif "/" in frames[i*2:i*2+2]:
            if len(frames[i*2:i*2+2].replace("/", "")) > 1:
                score += 10 + sum(map(int, frames[(i+1)*2:(i+2)*2]))
            else:
                score += 10
        elif frames[i*2:i*2+2] == "X/X":
            score += 20
        else:
            score += sum(map(int, frames[i*2:i*2+2]))
    return score