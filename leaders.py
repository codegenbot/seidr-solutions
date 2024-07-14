Here is the solution:

def leaders(vector):
    leaders = [vector[-1]]
    for i in range(len(vector) - 2, -1, -1):
        if vector[i] >= vector[i + 1]:
            leaders.insert(0, vector[i])
    return leaders