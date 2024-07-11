```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            i += 1
            if i < len(frames) and frames[i] != "X":
                score += int(frames[i])
            else:
                break
        elif "/" in frames[i:i+2]:
            if frames[i] == "X":
                score += 10 + int(frames[i+1])
            else:
                score += 10 - int(frames[i])
            i += 1
            while i < len(frames) and (frames[i] != "X" or frames[i-1] == "/"):
                if frames[i] == "X":
                    score += 10
                    break
                elif frames[i] != "/":
                    score += int(frames[i])
                i += 1
        else:
            score += sum(map(int, frames[i:i+2]))
        i += 2
    return score