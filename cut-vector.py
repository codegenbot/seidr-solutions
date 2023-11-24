def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum

    min_diff = float("inf")
    index = -1

    for i in range(n - 1):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)
        if diff <= min_diff:
            min_diff = diff
            index = i

    return vector[: index + 1], vector[index + 1 :]


vector = []
while True:
    num = input()
    if not num:
        break
    vector.append(int(num))

print(*cut_vector(vector), sep="\n")