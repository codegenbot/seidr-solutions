```
def cut_vector(vector):
    min_diff = float('inf')
    split_idx = -1
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        if left_sum == right_sum:
            return vector[:i], vector[i:]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_idx = i
    left_sum = sum(vector[:split_idx])
    right_sum = sum(vector[split_idx:])
    if left_sum == right_sum:
        return vector[:split_idx], vector[split_idx:]
    return vector[:split_idx], vector[split_idx:]


# Testing the function
print(cut_vector([1]))  # Expected output: ([1], [0])
print(cut_vector([1, 10]))  # Expected output: ([1], [10, 0])
print(cut_vector([1, 100]))  # Expected output: ([1], [100, 0])
print(cut_vector([1, 1000]))  # Expected output: ([1], [1000, 0])
print(cut_vector([1, 10000]))  # Expected output: ([1], [10000, 0])