def leaders(input_vector):
    leaders_list = [input_vector[-1]]
    for i in range(len(input_vector) - 2, -1, -1):
        if input_vector[i] >= input_vector[i + 1]:
            leaders_list.insert(0, input_vector[i])
    return leaders_list