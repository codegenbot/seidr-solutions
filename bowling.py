def bowling_score(s):
    score = 0
    frames = s.replace("/","-").replace("X","10")
    frame_scores = [0]*11
    
    for i in range(0,len(frames),1):
        if frames[i]=="X":
            frame_scores[9] += 10
            if i+2 < len(frames) and frames[i+1:i+3].isdigit():
                frame_scores[10] += int(frames[i+1:i+3])
            else:
                score = 0
                for j in range(0,11):
                    score += frame_scores[j]
                return score
        elif frames[i]=="-":
            if i+2 < len(frames) and frames[i+1:i+3].isdigit():
                first_roll = int(frames[i+1])
                second_roll = int(frames[i+2])
                if first_roll + second_roll == 10:
                    frame_scores[9] += first_roll
                    frame_scores[10] += second_roll
                else:
                    frame_scores[10-1] += first_roll
                    frame_scores[10] += second_roll
            else:
                score = 0
                for j in range(0,11):
                    score += frame_scores[j]
                return score
        elif frames[i].isdigit():
            if i+2 < len(frames) and frames[i+1:i+3].isdigit():
                first_roll = int(frames[i])
                second_roll = int(frames[i+1])
                third_roll = int(frames[i+2])
                if first_roll == 10:
                    frame_scores[9] += first_roll + second_roll
                    if i+3 < len(frames):
                        third_roll = int(frames[i+3])
                        frame_scores[10] += third_roll
                    else:
                        score = 0
                        for j in range(0,11):
                            score += frame_scores[j]
                        return score
                elif first_roll + second_roll == 10:
                    frame_scores[9] += first_roll + second_roll
                    if i+3 < len(frames):
                        third_roll = int(frames[i+3])
                        frame_scores[10] += third_roll
                    else:
                        score = 0
                        for j in range(0,11):
                            score += frame_scores[j]
                        return score
                else:
                    frame_scores[9-1] += first_roll + second_roll
            elif i+1 < len(frames) and frames[i+1].isdigit():
                first_roll = int(frames[i])
                second_roll = int(frames[i+1])
                if first_roll == 10:
                    frame_scores[9] += first_roll + second_roll
                else:
                    frame_scores[9-1] += first_roll + second_roll
            else:
                score = 0
                for j in range(0,11):
                    score += frame_scores[j]
                return score
        
    if i == len(frames) - 1 and frames[i].isdigit():
        score = 0
        for j in range(0,11):
            score += frame_scores[j]
        return score
    else:
        return None