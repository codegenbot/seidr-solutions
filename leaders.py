def leaders(vector):
    current_leader = vector[0]
    result = []
    for i in range(1, len(vector)):
        if vector[i] >= current_leader:
            result.append(current_leader)
            current_leader = vector[i]
    if vector[-2] >= current_leader:
        result.append(vector[-2])
    return result