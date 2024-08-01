def leaders(input):
    return [
        i for i in reversed(input) if all(i >= j for j in input[input.index(i) + 1 :])
    ]