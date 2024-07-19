def cut_vector(vector):
    min_diff = float("inf")
    split_index = -1
    for i in range(1, len(vector)+1):  
        if sum(vector[:i]) == sum(vector[i:]):
            if abs(sum(vector[:i]) - sum(vector[i:])) < min_diff:
                min_diff = 0
                split_index = i
        else:
            diff = abs(sum(vector[:i]) - sum(vector[i:]))
            if diff < min_diff:
                min_diff = diff
                split_index = i

    return vector[:split_index], vector[split_index:]