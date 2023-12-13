def find_leaders(input_vector):
    vector = list(map(int, input_vector.strip().split()))
    leaders = []
    max_right = vector[-1]
    for i in range(len(vector)-2, -1, -1):
        if vector[i] >= max_right and all(vector[i] >= x for x in leaders):
            leaders.append(vector[i])
        max_right = max(max_right, vector[i])
    leaders.append(max_right)
    return leaders