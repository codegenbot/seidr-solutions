def cut_vector(numbers):
    n = len(numbers)
    total_sum = sum(numbers)
    left_sum = 0
    min_diff = float("inf")
    cut_index = -1

    for i in range(n):
        left_sum += numbers[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return numbers[: cut_index + 1], numbers[cut_index + 1 :]


numbers = list(map(int, input().split()))

left_subvector, right_subvector = cut_vector(numbers)
for num in left_subvector:
    print(num)
for num in right_subvector:
    print(num)