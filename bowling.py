Here is the solution:

def bowling(score):
    frames = score.split('/')
    total_score = 0
    for i in range(len(frames)):
        if frames[i].isdigit():
            if len(frames[i]) == 1:
                total_score += int(frames[i])
            else:
                total_score += int(frames[i])
        elif frames[i] == 'X':
            total_score += 10 + (10 - int(frames[i-1])) if i > 0 and frames[i-1].isdigit() else 10
        elif frames[i][0] == '-':
            total_score += 10 + int(frames[i-1]) if i > 0 and frames[i-1].isdigit() else 10
    return total_score