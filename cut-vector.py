
The corrected code is:
```
def cut_vector(vector):
    min_diff = math.inf
    spot = 0
    for i in range(1, len(vector)):
        diff = abs(vector[i] - vector[i-1])
        if diff < min_diff:
            min_diff = diff
            spot = i
    return vector[:spot], vector[spot:]
```