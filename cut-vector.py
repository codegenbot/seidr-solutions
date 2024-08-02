def cut_vector(vector):
    left_sum = sum(vector[:i+1]) for i in range(len(vector)))
    min_diff = min(abs(sum(vector[:i+1])-sum(vector[i:])) for i in range(len(vector)))
    target_sum = (left_sum + min_diff) // 2
    for i, num in enumerate(vector):
        if sum(vector[:i+1]) == target_sum:
            return vector[:i], vector[i:]