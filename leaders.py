def leaders(input):
    return [x for i, x in enumerate(reversed(input)) if all(y <= x for y in input[i+1:])]