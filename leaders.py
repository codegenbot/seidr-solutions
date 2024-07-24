```
def leaders(input):
    max_seen = input[-1]
    return [max for max, _ in reversed(list(enumerate(input))) if max >= max_seen][1:]