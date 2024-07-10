```
def leaders(input):
    return [x for i, x in reversed(list(enumerate(input))) if all(x >= input[i + 1:])]