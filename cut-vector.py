```
def cut_vector(vector):
    total = sum(vector)
    left_sum, min_diff = 0, float('inf')
    split_indices = []

    for i in range(len(vector)):
        if left_sum == total - left_sum:
            return vector[:i+1], vector[i:]
        elif abs(left_sum - (total - left_sum)) < min_diff:
            min_diff = abs(left_sum - (total - left_sum))
            split_indices = [i]

        elif abs(left_sum - (total - left_sum)) == min_diff:
            if i != len(vector) - 1:
                split_indices.append(i)
            else:
                return [0], vector

        left_sum += vector[i]
    return [0], vector