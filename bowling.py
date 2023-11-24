def bowling_score(input_string):
    score = 0
    frames = []
    frame = ""
    
    for char in input_string:
        frame += char
        
        if char == "X" or len(frame) == 2:
            frames.append(frame)
            frame = ""
    
    for i in range(len(frames)):
        frame = frames[i]
        
        if frame == "X":
            score += 10
            if i < len(frames) - 2:
                next_frame = frames[i+1]
                next_next_frame = frames[i+2]
                
                if next_frame == "X":
                    score += 10
                    if next_next_frame == "X":
                        score += 10
                    else:
                        score += int(next_next_frame[0])
                else:
                    score += int(next_frame[0])
                    
                    if next_frame[1] == "/":
                        score += 10 - int(next_frame[0])
        
        elif frame[1] == "/":
            score += 10
            if i < len(frames) - 1:
                next_frame = frames[i+1]
                score += int(next_frame[0])
        
        else:
            score += int(frame[0]) + int(frame[1])
    
    return score

input_string = input()
print(bowling_score(input_string))