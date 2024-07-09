```python
def bowling_score(frames):
    score = 0
    frame_values = [int(frame) for frame in frames.replace('-', '').split('/')]
    for i, value in enumerate(frame_values):
        if value == 10:  
            score += value + frame_values[(i+1)%2 + (i+1)//2]
        elif value >= 10:  
            score += value + frame_values[(i+1)%2 + (i+1)//2] + frame_values[(i+2)%2 + (i+2)//2]
        else:
            score += value + min(frame_values[i+1], 10)
    return score