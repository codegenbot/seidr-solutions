def leaders(input):
    leader = []
    max_left = input[0]
    max_right = input[-1]
    for i in range(len(input)):
        if i >= len(input) // 2:
            if input[i] <= max_right:
                return []
            max_right = input[i]
        else:
            if input[i] >= max_left:
                leader.append(input[i])
                max_left = input[i]
    return leader