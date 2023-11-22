def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum -= vector[i]

        if left_sum == right_sum or abs(left_sum - right_sum) < abs(
            left_sum - right_sum - vector[i + 1]
        ):
            return vector[: i + 1], vector[i + 1 :]

    return vector, [0]


vector = list(map(int, input().split()))

left_subvector, right_subvector = cut_vector(vector)
for num in left_subvector:
    print(num)
for num in right_subvector:
    print(num)