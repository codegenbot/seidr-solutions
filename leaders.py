def leaders(input):
    result = [input[-1]]
    for i in range(len(input) - 2, -1, -1):
        if input[i] >= input[i + 1]:
            result.insert(0, input[i])
    return result