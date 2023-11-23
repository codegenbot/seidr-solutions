def cut_vector(numbers):
    total_sum = sum(numbers)
    left_sum = 0
    min_diff = float("inf")
    cut_index = -1

    for i, num in enumerate(numbers):
        left_sum += num
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return numbers[: cut_index + 1], numbers[cut_index + 1 :]


numbers = [int(input()) for _ in range(int(input()))]
left_subvector, right_subvector = cut_vector(numbers)
print(*left_subvector, sep="\n")
print(*right_subvector, sep="\n")