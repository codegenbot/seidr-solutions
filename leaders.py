def leaders(input_vector):
    leaders = []
    max_seen = input_vector[-1]
    for i in range(len(input_vector) - 1, -1, -1):
        if input_vector[i] >= max_seen:
            leaders.append(input_vector[i])
            max_seen = input_vector[i]
    return list(reversed(leaders))