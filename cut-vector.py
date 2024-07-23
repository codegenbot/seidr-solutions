def cut_vector(vector):
    min_diff = float('inf')
    split_index = 0
    left = []
    right = []

    for i in range(1, len(vector)):
        if sum(vector[:i+1]) == sum(vector[i:]):
            return left + [vector[:i]], vector[i:]
        elif abs(sum(vector[:i+1]) - sum(vector[i:])) <= min_diff:
            min_diff = abs(sum(vector[:i+1]) - sum(vector[i:]))
            split_index = i

    return left + [vector], []