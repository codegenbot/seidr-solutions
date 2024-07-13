def cut_vector(vector):
    min_diff = float("inf")
    cut_point = -1

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            return vector[:i], vector[i:]

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cut_point = i

    left_sum = sum(vector[:cut_point])
    right_sum = sum(vector[cut_point:])

    if left_sum == right_sum:
        return vector[:cut_point], vector[cut_point:]
    else:
        return vector[:cut_point], vector[cut_point:]


# Testing the function
print(cut_vector([1, 0]))  # Should print ([1], [0])
print(cut_vector([1, 10]))  # Should print ([1], [10])
print(cut_vector([1, 100]))  # Should print ([1], [100])
print(cut_vector([1, 1000]))  # Should print ([1], [1000])
print(cut_vector([1, 10000]))  # Should print ([1], [10000])