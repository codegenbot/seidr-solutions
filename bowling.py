```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i:i+2] == "X/":
            score += 10
            i += 1
            if i < len(frames) and frames[i].isdigit():
                score += int(frames[i])
            if i + 1 < len(frames) and frames[i+1].isdigit():
                score += int(frames[i+1])
        elif "/" in frames[i:i+3]:
            spare = int(frames[i+1:i+2])
            score += 10
            i += 3
            while i < len(frames) and frames[i] != "/":
                if frames[i].isdigit():
                    score += int(frames[i])
                i += 1
        else:
            roll1, roll2 = map(int, frames[i:i+2].split('/'))
            score += roll1 + roll2
            i += 2
    return score

print(bowling_score("9/6/X22-1167132414/1"))