def leaders(input):
    return [
        x for x in reversed(input) if all(y <= x for y in input[input.index(x) + 1 :])
    ]