def leaders(input):
    return [x for i, x in reversed(list(enumerate(input))) if all(y <= x for y in input[i+1:])]