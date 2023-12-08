
```
def cut_vector(vector):
    # Find the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible.
    min_diff = float('inf')
    spot = 0
    for i in range(1, len(vector)):
        diff = abs(vector[i] - vector[i-1])
        if diff < min_diff:
            min_diff = diff
            spot = i
    return vector[:spot], vector[spot:]
```
This code will create two sub-vectors by slicing the original vector at the `spot` position. The first sub-vector contains all elements up to and including the `spot` element, while the second sub-vector contains all elements after the `spot` element..