def leaders(input):
    n = len(input)
    output = [input[n - 1]]
    for i in range(n - 2, -1, -1):
        if input[i] >= input[i + 1]:
            output.insert(0, input[i])
    return output