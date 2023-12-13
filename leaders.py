def find_leaders(input_vector):
    vector = list(map(int, input_vector.split(',')))
    leaders = []
    max_right = vector[-1]
    for i in reversed(range(len(vector)-1)):
        if vector[i] >= max_right:
            leaders.append(vector[i])
            max_right = vector[i]
    return list(reversed(leaders))