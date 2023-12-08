```
def cut_vector(vector):
    # Find the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible.
    min_diff = math.inf
    spot = 0
    for i in range(1, len(vector)):
        diff = abs(vector[i] - vector[i-1])
        if diff < min_diff:
            min_diff = diff
            spot = i
    return vector[:spot], vector[spot:]
```