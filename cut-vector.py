def cut_vector(vector):
    n = len(vector)
    if n == 1:
        return [vector], [vector]

    left_sum = sum(vector[:i+1]) for i in range(n)]
    min_diff = float('inf')
    cut_index = -1
    for i, diff in enumerate([abs(sum(vector[:j+1])) - sum(vector[j:])] for j in range(n-1)):
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return [vector[:cut_index+1]], [vector[cut_index+1:]]