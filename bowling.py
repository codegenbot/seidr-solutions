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
            first_roll = int(frames[i-1].replace('/',""))
            score += 10 - first_roll
            if i < len(frames) - 1 and frames[i+1].isdigit():
                score += int(frames[i+1])
            i += 2
        else:
            rolls = list(map(int, frames[i].replace("/","").split()))
            score += sum(rolls)
            i += 1

    return score