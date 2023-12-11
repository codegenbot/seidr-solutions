def leaders(vector):
    leaders = []
    for i in range(len(vector)):
        if vector[i] >= all(vector[j] for j in range(i+1, len(vector))):
            leaders.append(vector[i])
    return leaders