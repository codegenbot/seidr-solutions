def leaders(input_vector):
    leaders = []
    max_right = input_vector[-1]
    for num in reversed(input_vector):
        if num >= max_right:
            leaders.append(num)
        else:
            max_right = num
    return list(reversed(leaders))