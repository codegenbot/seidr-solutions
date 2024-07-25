Here is the solution:

def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            strike = False
            if i + 1 < len(frames) and frames[i+1].isdigit():
                spare = False
                for j in range(i+2, min(len(frames), i+3)):
                    if not frames[j].isdigit():
                        break
                if j == i+2:
                    score += 10 + int(frames[i]) + int(frames[i+1])
                else:
                    score += 10 + int(frames[i]) + int(frames[i+1])
            elif i + 1 < len(frames):
                score += 10 + int(frames[i])
        else:
            strike = True
            for j in range(i, min(len(frames), i+2)):
                if not frames[j].isdigit():
                    break
            if j == i:
                score += 10
            elif j == i+1:
                score += 20
            else:
                score += 30
    return score