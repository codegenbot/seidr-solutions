def leaders(input_vector):
    leaders_vector = []
    max_right = input_vector[-1]
    leaders_vector.append(max_right)

    for i in range(len(input_vector) - 2, -1, -1):
        if input_vector[i] >= max_right:
            leaders_vector.insert(0, input_vector[i])
            max_right = input_vector[i]

    return leaders_vector