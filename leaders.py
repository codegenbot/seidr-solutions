def leaders(input_vector):
    leaders = []
    for i in range(len(input_vector) - 1, -1, -1):
        max_right = input_vector[i]
        for j in range(i + 1, len(input_vector)):
            if input_vector[j] > max_right:
                max_right = input_vector[j]
        if input_vector[i] >= max_right:
            leaders.append(input_vector[i])
    return list(reversed(leaders))