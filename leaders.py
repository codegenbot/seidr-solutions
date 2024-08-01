def leaders(input):
    output = []
    max_r = input[-1]
    for i in range(len(input) - 1, -1, -1):
        if input[i] >= max_r:
            output.append(input[i])
            max_r = input[i]
    return output[::-1]