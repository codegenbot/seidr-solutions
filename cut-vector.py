def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    min_diff = float("inf")
    split_index = -1
    for i, num in enumerate(vector):
        current_sum += num
        if abs(current_sum * 2 - total_sum) <= abs(min_diff):
            min_diff = current_sum * 2 - total_sum
            split_index = i
    return vector[: split_index + 1], vector[split_index + 1 :]


vector = list(map(int, input().split()))
subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
print()
for num in subvector2:
    print(num)