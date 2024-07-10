Here is the solution:

def bowling_score(frames):
    score = 0
    frame_numbers = [int(x) for x in frames.replace('/', '")]
    
    for i in range(0, len(frame_numbers), 2):
        if frame_numbers[i] == 10:
            score += 10 + frame_numbers[i+1]
        elif frame_numbers[i] + frame_numbers[i+1] == 10:
            score += 10
        else:
            score += frame_numbers[i] + frame_numbers[i+1]
    return score