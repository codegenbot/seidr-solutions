def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum -= vector[i]

        if left_sum == right_sum or abs(left_sum - right_sum) == 1:
            return vector[: i + 1], vector[i + 1 :]

    return vector[: len(vector) - 1], vector[-1:]


vector = list(map(int, input().split()))
result1, result2 = cut_vector(vector)
for num in result1:
    print(num)
for num in result2:
    print(num)