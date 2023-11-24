import re

def bowling_score(bowls):
    score = 0
    frames = re.findall(r'X|/\d|-|\d', bowls)
    for i in range(len(frames)):
        if frames[i] == 'X':
            score += 10
            if i < len(frames) - 2:
                if frames[i+1] == 'X':
                    score += 10
                    if frames[i+2] == 'X':
                        score += 10
                    else:
                        score += int(frames[i+2])
                elif frames[i+1] == '/':
                    score += 10
                else:
                    score += int(frames[i+1][0]) + int(frames[i+1][1])
        elif '/' in frames[i]:
            score += 10
            if i < len(frames) - 1:
                if frames[i+1] == 'X':
                    score += 10
                else:
                    score += int(frames[i+1][0])
        elif '-' in frames[i]:
            score += int(frames[i][0])
        else:
            score += int(frames[i])
    return score