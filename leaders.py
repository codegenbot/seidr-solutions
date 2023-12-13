def find_leaders(input_vector):
    vector = list(map(int, input_vector.split()))
    leaders = [vector[-1]]
    max_right = vector[-1]
    for i in range(1, len(vector)):
        if vector[i] >= max_right and vector[i] >= leaders[-1]:
            leaders.append(vector[i])
            max_right = vector[i]
    return reversed(leaders)