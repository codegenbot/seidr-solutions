def leaders(vector):
    result = []
    current_leader = None
    for i in range(len(vector)):
        if vector[i] >= current_leader:
            current_leader = vector[i]
            result.append(current_leader)
    return result