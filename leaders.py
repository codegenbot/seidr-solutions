def leaders(input):
    output = []
    max_right = 0
    for i in range(len(input) - 1, -1, -1):
        if i == len(input) - 1 or input[i] >= max_right:
            output.append(input[i])
            max_right = input[i]
    return output[::-1]