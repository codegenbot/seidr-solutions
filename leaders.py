def leaders(input_vector):
    leaders = [input_vector[-1]]
    for i in range(len(input_vector)-1, 0, -1):
        if input_vector[i] >= leaders[0]:
            leaders.insert(0, input_vector[i])
    return leaders