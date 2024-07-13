def leaders(vector):
    leaders = [vector[-1]]
    for i in range(len(vector) - 2, -1, -1):
        if vector[i] >= vector[-1]:
            leaders.append(vector[i])
            vector[-1] = vector[i]
    return list(reversed(leaders))