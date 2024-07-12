def leaders(input_vector):
    leaders = []
    max_right = 0
    for num in input_vector:
        if num >= max_right:
            leaders.append(num)
            max_right = num
    return list(reversed(leaders))