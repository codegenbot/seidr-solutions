def find_leaders(vector):
    vector = list(map(int, vector.strip().split()))
    leaders = []
    max_right = vector[-1]
    leaders.append(max_right)
    for i in range(len(vector)-2, -1, -1):
        if vector[i] >= max_right:
            leaders.append(vector[i])
            max_right = vector[i]
    return leaders[::-1]