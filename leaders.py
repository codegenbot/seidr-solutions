def leaders(input):
    result = [input[-1]]
    for i in range(len(input) - 1, 0, -1):
        if input[i] >= max(input[i:]):
            result.append(input[i])
    return list(reversed(result))