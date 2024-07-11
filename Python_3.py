```
def check_speeds(speeds: List[int]) -> str:
    if not isinstance(speeds, list):
        return 'invalid input'
    
    for speed in speeds:
        if not isinstance(speed, int) or speed < 0:
            return 'invalid speed'

    avg = sum(speeds) / len(speeds)
    
    if avg < 60:
        return 'slow'
    elif avg >= 61 and avg <= 80:
        return 'average'
    else:
        return 'fast'