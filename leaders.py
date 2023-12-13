def find_leaders(input_vector):
    vector = map(int, input_vector.split())
    leaders = []
    max_right = vector[-1]
    for i in reversed(range(len(vector)-1)):
        if vector[i] >= max_right:
            leaders.append(vector[i])
            max_right = vector[i]
    leaders.reverse()
    leaders.append(vector[-1])
    return *leaders