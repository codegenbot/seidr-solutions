def leaders(input):
    return [
        x
        for i, x in reversed(list(enumerate(input)))
        if not any(y >= x for y in input[:i])
    ]