def cut_vector(vector):
    sorted_vector = sorted(vector)
    min_diff = float('inf')
    split_index = 0
    for i in range(1, len(sorted_vector)):
        if abs(sum(sorted_vector[:i]) - sum(sorted_vector[i:])) <= min_diff:
            min_diff = abs(sum(sorted_vector[:i]) - sum(sorted_vector[i:]))
            split_index = i

    return [sorted_vector[:split_index], sorted_vector[split_index:]]