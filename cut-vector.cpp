```
def get_two_subvectors(vec):
    left = 0
    right = 0
    for i in range(1, len(vec)):
        if vec[i] - vec[left] > vec[right] - vec[i]:
            left = i
        else:
            right = i
    return vec[:left], vec[right:]
```