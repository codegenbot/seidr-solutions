def cut_vector(input_vector):
    total_sum = sum(input_vector)
    current_sum = 0
    min_diff = float("inf")
    cut_index = 0

    for i in range(len(input_vector)):
        current_sum += input_vector[i]
        diff = abs(current_sum - (total_sum - current_sum))
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return input_vector[: cut_index + 1], input_vector[cut_index + 1 :]


input_vector = list(map(int, input().split()))
subvector1, subvector2 = cut_vector(input_vector)
print(*subvector1)
print(*subvector2)