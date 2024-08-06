def leaders(input):
    output = []
    max_right = input[-1]
    for i in range(len(input) - 1, -1, -1):
        if input[i] >= max_right:
            output.append(input[i])
            max_right = input[i]
    return output[::-1]