def leaders(input):
    output = []
    max_right = input[0]
    for i in range(len(input)):
        if input[i] >= max_right:
            output.append(input[i])
            max_right = input[i]
    return output