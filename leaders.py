def leaders(vector):
    result = []
    current_leader = None
    for i in range(len(vector)):
        if vector[i] >= current_leader:
            result.append(vector[i])
            current_leader = vector[i]
    return result