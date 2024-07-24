```
def leaders(input):
    max_right = max(input)
    return [x for x in input if x >= max_right]