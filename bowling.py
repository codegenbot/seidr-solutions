def bowling_score(bowls):
    score = 0
    frames = bowls.split("/")
    
    frame_index = 0
    bowl_index = 0
    for i in range(len(frames)):
        if frames[i] == "X":
            score += 10
            if frame_index < 9:
                score += 10
                if bowls[bowl_index + 2] == "X":
                    score += 10
                elif bowls[bowl_index + 2] != "-":
                    score += int(bowls[bowl_index + 2])
        else:
            for bowl in frames[i]:
                if bowl == "-":
                    pass
                else:
                    score += int(bowl)
                    
        frame_index += 1
        bowl_index += len(frames[i]) + 1

    return score