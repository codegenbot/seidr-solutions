```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            if i < len(frames) - 1 and (frames[i+1] == 'X' or frames[i+1].isdigit()):
                if frames[i+1] == 'X':
                    score += 10
                else:
                    rolls = list(map(int, frames[i+1].replace("/","").split()))
                    score += sum(rolls)
            i += 1
        elif frames[i] == '/':
            score += 10
            if i < len(frames) - 1 and frames[i+1].isdigit():
                score += int(frames[i+1])
            i += 2
        else:
            rolls = list(map(int, frames[i].replace("/","").split()))
            if len(rolls) == 1:
                score += rolls[0]
            elif len(rolls) == 2:
                if sum(rolls) == 10 and (i+1 >= len(frames) or frames[i+1] in ['X', '/']):
                    score += 10
                else:
                    score += sum(rolls)
            i += 1

    return score