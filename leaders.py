def leaders(input):
    output = []
    max_right = input[-1]
    output.append(max_right)

    for i in range(len(input) - 2, -1, -1):
        if input[i] >= max_right:
            output.append(input[i])
            max_right = input[i]

    return output[::-1]