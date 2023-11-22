def find_first_negative_index(vector):
    current_sum = 0
    for i in range(len(vector)):
        current_sum += vector[i]
        if current_sum < 0:
            return i
    return -1