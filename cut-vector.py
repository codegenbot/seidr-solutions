def get_min_diff(vector):
    diff = math.inf
    min_index = 0
    for i in range(1, len(vector)):
        if vector[i] - vector[i-1] < diff:
            diff = vector[i] - vector[i-1]
            min_index = i
    return diff, min_index

def cut_vector(vector):
    diff, min_index = get_min_diff(vector)
    return vector[:min_index], vector[min_index:]