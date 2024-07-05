```
def bowling_score(frames):
    score = 0
    i = 0

    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
            if i < len(frames) and (frames[i] == 'X' or (i + 2 < len(frames) and frames[i:i+2].isdigit())):
                score += 10 if frames[i] == 'X' else int(frames[i:i+2])
        elif '/' in frames[i:]:
            score += 10
            if i + 1 < len(frames) and frames[i+1].isdigit():
                score += int(frames[i+1])
        else:
            temp = ''
            while i < len(frames) and frames[i].isdigit():
                temp += frames[i]
                i += 1
            score += int(temp)

    return score

print(bowling_score('1262365421327154-52/9'))