def leaders(input):
    output = []
    max_right = input[0]
    for i in range(len(input)):
        if input[i] >= max_right:
            output.append(max_right)
            max_right = input[i]
    output.append(max_right)
    return output