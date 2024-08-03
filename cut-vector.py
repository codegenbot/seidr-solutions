def cut_vector(nums):
    min_diff = float("inf")
    split_index = -1

    for i in range(1, len(nums)):
        left_sum = sum(nums[:i])
        right_sum = sum(nums[i:])

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            split_index = i

    if split_index == -1:
        return [nums], []

    left_half = nums[:split_index]
    right_half = nums[split_index:]

    return left_half, right_half


# Test the function
print(cut_vector([1, 0]))  # Expected output: ([1], [0])
print(cut_vector([1, 10]))  # Expected output: ([1], [10, 0])
print(cut_vector([1, 100]))  # Expected output: ([1], [100, 0])
print(cut_vector([1, 1000]))  # Expected output: ([1], [1000, 0])
print(cut_vector([1, 10000]))  # Expected output: ([1], [10000, 0])