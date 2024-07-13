Here is a possible solution in Python:

```
def bowling_score(score_string):
    score = 0
    frame_scores = score_string.split('/')
    for i in range(10):
        if len(frame_scores[i]) == 1:
            score += int(frame_scores[i])
        elif len(frame_scores[i]) == 2:
            strike = int(frame_scores[i][0]) + int(frame_scores[i][1])
            score += strike
        else:
            strike = int(frame_scores[i][0])
            spare = int(frame_scores[i][1:]) + strike
            score += strike + spare // 10
    return score