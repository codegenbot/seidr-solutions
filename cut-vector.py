Here is the solution:

def cut_vector(vector):
    min_diff = float('inf')
    split_idx = 0
    left_sum = sum(vector[:1])
    for i in range(1, len(vector)):
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_idx = i
    return vector[:split_idx+1], vector[split_idx:]