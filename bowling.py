def bowling(input_str):
    score = 0
    frames = []
    for i in range(0, len(input_str), 2):
        if input_str[i] == "X":
            frames.append((10, 0))
        elif input_str[i] == "/":
            frames.append((int(input_str[i-1]), 10 - int(input_str[i-1])))
        else:
            frames.append((int(input_str[i]), 0))
    
    for i in range(10):
        if frames[i][0] == 10:
            score += 10 + sum(frames[i+1]) + sum(frames[i+2])
        elif sum(frames[i]) == 10:
            score += 10 + frames[i+1][0]
        else:
            score += sum(frames[i])
    
    return score

input_str = input().strip()
print(bowling(input_str))