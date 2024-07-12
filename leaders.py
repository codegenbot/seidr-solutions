def leaders(input_vector):
    leaders = []
    max_leader = input_vector[-1]
    for i in range(len(input_vector) - 2, -1, -1):
        if input_vector[i] >= max_leader:
            leaders.append(max_leader)
            max_leader = input_vector[i]
    leaders.append(max_leader)
    return list(reversed(leaders))