def find_leaders(vector):
    leaders = [vector[-1]]
    for i in range(len(vector)-2, -1, -1):
        if vector[i] >= leaders[-1]:
            leaders.append(vector[i])
    return leaders[::-1]