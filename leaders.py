```
def leaders(input):
    max_so_far = max(input)
    leaders = [x for x in reversed(input) if x >= max_so_far]
    return leaders