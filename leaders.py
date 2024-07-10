def leaders(input_vector):
    leaders = []
    for i in range(len(input_vector) - 1, -1, -1):
        leaders.append(input_vector[i])
    return list(reversed(leaders))