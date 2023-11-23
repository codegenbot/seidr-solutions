def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    smallest_difference = float("inf")
    left_index = -1
    right_index = 0
    for i, num in enumerate(vector):
        current_sum += num
        diff = abs(current_sum - (total_sum - current_sum))
        if diff < smallest_difference:
            smallest_difference = diff
            left_index = i
            right_index = i + 2

    return vector[:left_index+2], vector[right_index:]


vector = list(map(int, input().split()))
subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
print()
for num in subvector2:
    print(num)