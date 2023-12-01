def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum

    for i in range(n):
        left_sum += vector[i]
        right_sum -= vector[i]

        if left_sum == right_sum or abs(left_sum - right_sum) <= 1:
            return vector[: i + 1], vector[i + 1 :]

    return vector, [0]


input_vector = []
line = input()
while line:
    input_vector.append(int(line))
    line = input()

subvector1, subvector2 = cut_vector(input_vector)
for num in subvector1:
    print(num)
for num in subvector2:
    print(num)