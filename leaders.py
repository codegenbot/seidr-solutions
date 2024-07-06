def leaders(vector):
    result = []
    current_leader = None
    for i in range(len(vector)):
        if vector[i] >= current_leader and (i == 0 or vector[i - 1] < vector[i]):
            result.append(vector[i])
            current_leader = vector[i]
    return result