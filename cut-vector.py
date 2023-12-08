```
def cut_vector(vector):
    min_diff = math.inf
    spot = 0
    spots = []
    for i in range(1, len(vector)):
        diff = abs(vector[i] - vector[i-1])
        if diff < min_diff:
            min_diff = diff
            spots = [i]
        elif diff == min_diff:
            spots.append(i)
    return [vector[:spot] for spot in spots], [vector[spot:] for spot in spots]
```