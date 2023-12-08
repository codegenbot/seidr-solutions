def find_leaders(vector):
    leaders = []
    max_value = float('-inf')
    for i in range(len(vector)-1, -1, -1):
        if vector[i] >= max_value:
            max_value = vector[i]
            leaders.append(max_value)
    return leaders