```
``` 
def bowling_score(frames):
    score = 0
    frame_index = 0
    while frame_index < 10:
        if frames[frame_index] == 'X':
            score += 30
            frame_index += 1
        elif frames[frame_index].isdigit():
            score += int(frames[frame_index])
            frame_index += 1
        else:
            roll1, roll2 = frames[frame_index].split('/')
            score += int(roll1) + int(roll2)
            frame_index += 2
    return score
```