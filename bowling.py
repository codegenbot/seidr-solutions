```
def bowling_score(s):
    score = 0
    frames = s.replace("/","2").replace("X","10")
    for i in range(0,len(frames),1):
        if frames[i]=="1":
            if frames[i+1:i+3] == "11" or frames[i+1:i+3][0]=="X":
                score += 20
                break
            else:
                score += int(frames[i])
                i+=1
        elif frames[i]=="2":
            if frames[i+1:i+3] == "12" or frames[i+1:i+3][0]=="X":
                score += 30
                break
            else:
                score += int(frames[i]+frames[i+1])
                i+=2
        elif frames[i]=="10":
            if frames[i+1:i+3] == "20" or frames[i+1:i+3][0]=="X":
                score += 30
                break
            else:
                score += 10
                i+=1
        elif frames[i].isdigit():
            if int(frames[i])>9 and i+2 < len(frames):
                if int(frames[i+1]+frames[i+2])==10:
                    score += int(frames[i])+10
                    i+=2
                else:
                    score += 10+(int(frames[i+1:i+3])-int(frames[i]))//2*2
                    i+=3
            elif int(frames[i])<9 and i+1 < len(frames):
                if int(frames[i+1:i+3])==10:
                    score += int(frames[i])+10
                    i+=2
                else:
                    score += 10+(int(frames[i+1:i+3])-int(frames[i]))//2*2
                    i+=3
            else:
                score += int(frames[i])
                i+=1
        elif frames[i]=="S":
            if i+2 < len(frames):
                score += 5+int(frames[i+1:i+3])
                i+=3
            else:
                score += 5
                i+=1
    return score