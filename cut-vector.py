```
def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = float("inf")
    split_indices = []

    for i in range(len(vector)):
        right_sum = total_sum - sum(vector[:i+1])
        if abs(sum(vector[:i+1]) - right_sum) < min_diff:
            min_diff = abs(sum(vector[:i+1]) - right_sum)
            split_indices = [i]
        elif abs(sum(vector[:i+1]) - right_sum) == min_diff:
            split_indices.append(i)

    return vector[:split_indices[0]+1], vector[split_indices[0]:]