def leaders(input_list):
    if len(input_list) == 0:
        return []

    max_right = input_list[-1]
    leaders = [max_right]

    for i in range(len(input_list) - 2, -1, -1):
        if input_list[i] >= max_right:
            max_right = input_list[i]
            leaders.insert(0, max_right)

    return leaders