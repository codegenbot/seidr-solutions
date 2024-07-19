```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
            if i < len(frames):
                rolls = list(map(int, frames[i].replace("/","").split()))
                score += sum(rolls)
            i += (1 if i+1 < len(frames) and frames[i] != 'X' else 2)
        elif frames[i] == '/':
            score += 5
            rolls = list(map(int, [frames[i-1], frames[i].replace("/","").split()[0]].remove('/').split()))
            score += sum(rolls)
            i += (2 if i+1 < len(frames) and frames[i] != 'X' else 3)
        else:
            rolls = list(map(int, frames[i].replace("/","").split()))
            score += sum(rolls)
            i += (1 if i+1 < len(frames) and frames[i] != 'X' else 2)

    return score