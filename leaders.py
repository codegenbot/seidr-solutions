def leaders(input):
    output = []
    for i in range(len(input) - 1, -1, -1):
        if i == len(input) - 1 or input[i] >= max(input[i+1:]):
            output.append(input[i])
    return list(reversed(output))