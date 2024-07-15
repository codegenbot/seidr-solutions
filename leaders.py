def leaders(input):
    leader = []
    max_left = input[0]
    max_right = input[-1]

    for i in range(len(input)):
        if i > 0 and input[i] >= max_left:
            max_left = input[i]
        elif i < len(input) - 1 and input[i] <= max_right:
            max_right = input[i]

    for i in range(len(input)):
        if i == 0 or input[i] >= max_left:
            leader.append(input[i])
        elif i == len(input) - 1 or input[i] <= max_right:
            leader.append(input[i])

    return leader