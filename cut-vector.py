def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    min_diff = abs(sum(vector[1:]) - vector[0])
    cut_index = 0

    for i in range(1, len(vector)):
        left_sum += vector[i - 1]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if diff < min_diff or (
            diff == min_diff
            and abs(len(vector) // 2 - i) < abs(len(vector) // 2 - cut_index)
        ):
            min_diff = diff
            cut_index = i

    return vector[:cut_index], vector[cut_index:]

# Read input from user
vector = list(map(int, input().split()))
subvector1, subvector2 = cut_vector(vector)
print(*subvector1)
print(*subvector2)