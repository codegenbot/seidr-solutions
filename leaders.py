def leaders(input):
    output = []
    for i in range(len(input) - 1, -1, -1):
        if all(x <= input[i] for x in input[i+1:]):
            output.append(input[i])
    return list(reversed(output))