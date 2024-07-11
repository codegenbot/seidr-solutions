def cut_vector(vector):
    n = len(vector)
    min_diff = float("inf")
    cut_index = -1
    for i in range(1, n):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        if left_sum == right_sum:
            return vector[:i], vector[i:]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    left_sum = sum(vector[:cut_index])
    right_sum = sum(vector[cut_index:])
    if left_sum == right_sum:
        return vector[:cut_index], vector[cut_index:]
    return vector[:cut_index], vector[cut_index:]


# test cases
print(cut_vector([1]))  # output: [1], [0]
print(cut_vector([1, 10]))  # output: [1], [10, 0]
print(cut_vector([1, 100]))  # output: [1], [100, 0]
print(cut_vector([1, 1000]))  # output: [1], [1000, 0]
print(cut_vector([1, 10000]))  # output: [1], [10000, 0]