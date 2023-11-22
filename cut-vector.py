def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum

    for i in range(n):
        left_sum += vector[i]
        right_sum -= vector[i]

        if left_sum == right_sum or abs(left_sum - right_sum) < 1:
            return vector[: i + 1], vector[i + 1 :]

    return vector, []


input_vector = []
while True:
    num = input().strip()
    if num == "":
        break
    input_vector.append(int(num))

result1, result2 = cut_vector(input_vector)
print(*result1, sep="\n")
print(*result2, sep="\n")