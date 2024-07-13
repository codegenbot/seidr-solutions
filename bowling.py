```
def bowling(score):
    frames = score.split("/")
    return sum((10 if frame == 'X' else 10 - int(frame)) for frame in frames)