def leaders(vector):
    result = []
    current_leader = max(vector)
    for i in range(len(vector)):
        if vector[i] >= current_leader:
            result.append(current_leader)
            current_leader = vector[i]
    return result