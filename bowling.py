Here is the Python solution for the bowling problem:

```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if frame_num < 10:
                score += 30
            else:
                score += 10
        elif frames[i] == '/':
            strike_next = 0
            if frame_num < 9:
                strike_next = int(frames[i+1])
            score += 10 + strike_next
        else:
            if len(frames) > i+1 and frames[i:i+2].isdigit():
                points = sum(int(x) for x in frames[i:i+2])
                if points == 10:
                    score += 10
                elif frame_num < 9:
                    score += points + strike_next
        frame_num += 1
    return score