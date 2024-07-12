def leaders(input_vector):
    leaders = []
    right_max = input_vector[-1]
    for i in range(len(input_vector) - 1, -1, -1):
        if input_vector[i] >= right_max:
            leaders.append(right_max)
        else:
            right_max = input_vector[i]
    return leaders