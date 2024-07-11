```
def bowling_score(s):
    score = 0
    frames = s.replace("/","2").replace("X","10")
    for i in range(0,len(frames),1):
        if frames[i].isdigit():
            if len(frames)-i <= 1:
                score += int(frames[i])
            elif len(frames)-i == 2 and frames[i:i+2].isdigit():
                score += sum(map(int,frames[i:i+2]))
            else:
                total = 0
                for j in range(i+1,min(i+4,len(frames))):
                    if frames[j]=="X":
                        total+=10
                        i=j
                        break
                    elif frames[j].isdigit() and int(frames[j])<5:
                        total += int(frames[j])
                    else:
                        total += int(frames[j])
                score += total
    return score