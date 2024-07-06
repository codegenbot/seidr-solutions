def leaders(vector):
    if len(vector) == 0:
        return []
    result = [vector[0]]
    current_leader = vector[0]
    for i in range(1, len(vector)):
        if vector[i] >= current_leader and vector[i] != current_leader:
            result.append(vector[i])
            current_leader = vector[i]
    return result