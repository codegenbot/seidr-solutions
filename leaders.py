def leaders(input):
    return [x for i, x in enumerate(reversed(input)) if all(x >= input[i + 1 :])]