def leaders(input):
    return [
        x
        for i, x in enumerate(reversed(input))
        if all(x >= y for j, y in enumerate(input)[i + 1 :])
    ]