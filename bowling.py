```
def bowling_score(frames):
    score = 0
    index = 0
    while index < len(frames):
        if frames[index] == 'X':
            score += 30
            if index < len(frames) - 1 and frames[index+1] != 'X' and frames[index+1] != '/':
                score += min(int(frames[index+1]),10)
            index += 1
        elif frames[index] == '/':
            score += 10 + int(frames[index-1])
            index += 2
        else:
            frame_score = 0
            if frames[index:index+2].startswith('X'):
                score += 30
                if index < len(frames) - 1 and frames[index+1] != 'X' and frames[index+1] != '/':
                    score += min(int(frames[index+1]),10)
                index += 2
            else:
                frame_score = int(frames[index]) + int(frames[index+1])
                if frame_score > 10:
                    frame_score = 10
                score += frame_score
                index += 2
    return score

print(bowling_score('728/5141410/9-7--772'))