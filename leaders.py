def leaders(input_vector):
    max_right = input_vector[-1]
    leaders = [max_right]
    for i in range(len(input_vector) - 2, -1, -1):
        if input_vector[i] >= max_right:
            max_right = input_vector[i]
            leaders.insert(0, max_right)
    return leaders