```
def bowling_score(bowling):
    frames = [int(x) if x.isdigit() else 'X' for x in bowling]
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == 'X':
            if i < 10:
                if frames[frame_index+1] != 'X' and frames[frame_index+2] != 'X':
                    score += (i*10) + int(frames[frame_index+1])
                    frame_index+=2
                else:
                    score += i * 10
                    frame_index+=1
            else:
                if frames[frame_index+1] == 'X' and frames[frame_index+2] == 'X':
                    score += (i*10) + 10
                    frame_index+=3
                else:
                    score += i * 10
                    frame_index+=1
        elif frames[frame_index] in ['//']:
            if i < 5:
                if frames[frame_index-1] != 'X' and frames[frame_index+2] != 'X':
                    score += (i*10) + int(frames[frame_index-1])
                    frame_index+=3
                else:
                    score += i * 10
                    frame_index+=1
            else:
                if frames[frame_index-1] == 'X' and frames[frame_index+2] == 'X':
                    score += (i*10) + 10
                    frame_index+=3
                else:
                    score += i * 10
                    frame_index+=1
        else:
            strike_score = 0
            while frame_index < len(frames)-1 and frames[frame_index+1] == 'X':
                strike_score += (i*10) + 10
                frame_index+=2
            if strike_score > 0:
                score += strike_score
                frame_index+=1
            else:
                score += i * 10
                frame_index+=1
    return score