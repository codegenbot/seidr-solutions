def leaders(input):
    return [max(input[i:]) for i in range(len(input) - 1, -1, -1)]