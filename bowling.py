```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            if i < len(frames) - 1:
                if frames[i+1].isdigit():
                    score += int(frames[i+1])
                elif frames[i+1] == 'X':
                    score += 10
                else:
                    rolls = list(map(int, frames[i+1].replace("/","").split()))
                    if len(rolls) > 0 and sum(rolls) <= 10:
                        score += sum(rolls)
            i += (2 if i+1 >= len(frames) else 1)
        elif frames[i] == '/':
            score += 5
            if i < len(frames) - 1 and frames[i+1].isdigit():
                if int(frames[i+1]) <= 5:
                    score += int(frames[i+1])
                else:
                    rolls = list(map(int, frames[i+1].replace("/","").split()))
                    if len(rolls) > 0 and sum(rolls) <= 10:
                        score += sum(rolls)
            i += (2 if i+1 >= len(frames) else 1)
        else:
            rolls = list(map(int, frames[i].replace("/","").split()))
            if len(rolls) > 0:
                if len(rolls) == 1:
                    score += rolls[0]
                elif len(rolls) == 2:
                    if sum(rolls) <= 10:
                        score += sum(rolls)
                    else:
                        score += 10
            i += (1 if i+1 < len(frames) and frames[i+1] != 'X' else 2)

    return score