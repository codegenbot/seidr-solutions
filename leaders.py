def leaders(input_vector):
    leaders = [input_vector[-1]]
    for i in range(len(input_vector) - 2, -1, -1):
        if input_vector[i] >= input_vector[leaders.index(input_vector[-1])] + 1:
            leaders.insert(0, input_vector[i])
    return leaders