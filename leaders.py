def leaders(input):
    leaders_list = []
    max_right = input[-1]
    for i in range(len(input) - 1, -1, -1):
        if input[i] >= max_right:
            leaders_list.append(input[i])
            max_right = input[i]
    return list(reversed(leaders_list))