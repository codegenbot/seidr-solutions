def bowling_score(frames):
    score = 0
    frame_count = 1
    for i in range(len(frames)):
        if frames[i] == "X":
            strike = True
            frame_count += 1
        elif frames[i] == "/":
            spare = True
            frame_count += 2
        else:
            if strike:
                score += 10 + sum(map(int, frames[i+1:i+3])) 
                strike = False
                frame_count += 1
            elif spare:
                score += 10 + map(int, frames[i+1:i+2])[0]
                spare = False
                frame_count += 2
            else:
                score += sum(map(int, frames[i:i+2]))
                frame_count += 1
                
    return score