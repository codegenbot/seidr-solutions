def calculate_bowling_score(input_str):
    score = 0
    frames = []
    frame = ""
    for i in range(len(input_str)):
        if input_str[i] == "X":
            frame = "X"
        elif input_str[i] == "/":
            frame = frame + "/"
        else:
            frame = frame + input_str[i]
        
        if len(frame) == 2 or frame == "X" or len(frames) == 9:
            frames.append(frame)
            frame = ""
    
    for i in range(len(frames)):
        if frames[i] == "X":
            score += 10
            if i < len(frames) - 2:
                if frames[i+1] == "X":
                    score += 10
                    if frames[i+2] == "X":
                        score += 10
                    else:
                        score += int(frames[i+2][0])
                else:
                    score += int(frames[i+1][0]) + int(frames[i+1][1])
        elif "/" in frames[i]:
            score += 10
            if frames[i+1][0] == "X":
                score += 10
            else:
                score += int(frames[i+1][0])
    
    return score

input_str = input()
print(calculate_bowling_score(input_str))