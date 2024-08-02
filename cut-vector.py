def cut_vector(vector):
    left_sum = 0
    min_diff = float("inf")
    split_index = -1

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum = sum(vector[i + 1 :])

        if left_sum == right_sum:
            return [vector[: i + 1], vector[i:]]

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i

    left_part = vector[:split_index]
    right_part = vector[split_index:]

    return [left_part, right_part]


# Testing the function
print(cut_vector([1]))  # Expected output: [[1], []]
print(cut_vector([1, 0]))  # Expected output: [[1,0], []]
print(cut_vector([1, 10]))  # Expected output: [[1,10], []]
print(cut_vector([1, 100]))  # Expected output: [[1,100], []]
print(cut_vector([1, 1000]))  # Expected output: [[1,1000], []]
print(cut_vector([1, 10000]))  # Expected output: [[1,10000], []]