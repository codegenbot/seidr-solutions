def leaders(input):
    return [
        x for x in reversed(input) if all(x >= y for y in input[input.index(x) + 1 :])
    ]