def leaders(input_vector):
    leaders = []
    max_right = input_vector[-1]
    for x in reversed(input_vector):
        if x >= max_right:
            leaders.append(x)
            max_right = x
    return list(reversed(leaders))