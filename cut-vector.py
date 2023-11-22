def cut_vector(vector):
    if len(vector) == 1:
        return vector, []

    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum -= vector[i]

        if left_sum == right_sum or abs(left_sum - right_sum) == 1:
            return vector[: i + 1], vector[i + 1 :]

    return vector, []


vector = list(map(int, input().split()))

left_subvector, right_subvector = cut_vector(vector)
print(*left_subvector)
print(*right_subvector, sep='\n')