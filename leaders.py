def find_leaders(vector):
    leaders = [vector[-1]]
    max_right = vector[-1]
    for i in range(len(vector)-1, -1, -1):
        if vector[i] >= max_right:
            leaders.append(vector[i])
            max_right = vector[i]
    return leaders[::-1]