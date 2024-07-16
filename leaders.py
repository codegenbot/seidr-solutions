def leaders(input):
    result = [input[-1]]
    for i in range(len(input) - 1, -1, -1):
        if input[i] >= min(input[i + 1:]):
            result.append(input[i])
    return list(reversed(result))