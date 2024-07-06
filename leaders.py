def leaders(vector):
    result = []
    current_leader = vector[-1]
    for i in range(len(vector) - 2, -1, -1):
        if vector[i] >= current_leader:
            result.append(current_leader)
            current_leader = vector[i]
    return [vector[-1]] + result