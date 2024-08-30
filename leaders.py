def leaders(input):
    output = []
    max_right = input[-1]
    output.append(max_right)

    for i in range(len(input) - 2, -1, -1):
        if input[i] >= max_right:
            max_right = input[i]
            output.insert(0, max_right)

    return output