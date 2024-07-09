```
def bowling_game(input_str):
    score = 0
    frames = [list(map(int, list(frame))) for frame in re.split('(?<=[-X])|(?=-|$)', input_str)]
    
    for i in range(10):
        if len(frames[i]) == 2 and sum(frames[i]) < 10:
            score += sum(frames[i])
        elif len(frames[i]) == 1 or (len(frames[i]) == 2 and sum(frames[i]) >= 10):
            if i != 9:
                score += sum(frames[i])
                if len(frames[i+1]) == 2 and sum(frames[i+1]) < 10:
                    score += sum(frames[i+1])
                elif len(frames[i+1]) == 1 or (len(frames[i+1]) == 2 and sum(frames[i+1]) >= 10):
                    i += 2
            else:
                if len(frames[i]) == 2:
                    score += sum(frames[i])
    
    return score