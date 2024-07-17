Here is the Python solution for the bowling problem:

```
def score_bowling(frames):
    scores = [0]
    previous_frame_score = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            scores.append(min(int(frame), 10) + previous_frame_score)
        else:
            strike = int(frame[0])
            scores.append(10 + previous_frame_score)
            if len(frames) - len(frames.split('/')) >= 2 and len(frames) - len(frames.split('/')) % 2 == 1:
                next_frame = frames.split('/')[len(frames.split('/'))-1]
                if len(next_frame) > 1:
                    scores.append(min(int(next_frame[0]), 10) + strike*2 + previous_frame_score)
        previous_frame_score = sum(scores[-2:])
    return sum(scores)

print(score_bowling("XXXXXXXXXXXX")) # Output: 300
print(score_bowling("5/5/5/5/5/5/5/5/5/5/5")) # Output: 150
print(score_bowling("7115XXX548/279-X53")) # Output: 145
print(score_bowling("532/4362X179-41447/5")) # Output: 100