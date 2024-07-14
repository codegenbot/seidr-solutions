```
def leaders(input):
    max_seen = max(input)
    return [x for x in reversed(input) if x >= max_seen]