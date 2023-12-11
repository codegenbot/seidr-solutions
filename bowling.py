def bowling(string):
    score = 0
    frames = [char for char in string] 
    for i in range(len(frames)):
        if frames[i] == 'X':
            score += 10
            if i < len(frames)-2:
                if frames[i+1] == 'X':
                    score += 10
                    if frames[i+2] == 'X':
                        score += 10
                    elif frames[i+2] == '/':
                        score += 10 - int(frames[i+1])
                    else:
                        score += int(frames[i+2])
                elif frames[i+1] == '/':
                    score += 10
                    if frames[i+2] == 'X':
                        score += 10
                    else:
                        score += int(frames[i+2])
                else:
                    score += int(frames[i+1]) + int(frames[i+2])
        elif frames[i] == '/':
            score += 10 - int(frames[i-1])
            if i < len(frames)-1:
                if frames[i+1] == 'X':
                    score += 10
                else:
                    score += int(frames[i+1])
        else:
            score += int(frames[i])
    return score

string = input()
print(bowling(string))