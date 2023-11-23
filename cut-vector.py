def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    smallest_difference = abs(total_sum - vector[0])
    left_index = 0
    right_index = 0
    for i, num in enumerate(vector[1:], start=1):
        current_sum += num
        diff = abs(current_sum - (total_sum - current_sum))
        if diff <= smallest_difference:
            smallest_difference = diff
            left_index = i
            right_index = i

    return vector[: left_index + 1], vector[right_index + 1:]


vector = list(map(int, input().split()))
subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
print()
for num in subvector2:
    print(num)