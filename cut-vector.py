```
def cut_vector(vector):
    n = len(vector)
    min_diff = float("inf")
    cut_index = -1
    left_sum = 0

    for i in range(n):
        right_sum = sum(vector[i:])
        
        if left_sum == right_sum:
            return vector[:i+1], vector[i+1:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i

        if i != n-1:
            left_sum += vector[i]

    if cut_index != -1:
        return vector[:cut_index], vector[cut_index:]
    else:
        return None