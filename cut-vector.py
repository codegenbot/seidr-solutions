def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float("inf")
    index = 0

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            index = i

    return vector[: index + 1], vector[index + 1 :]


vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

if len(vector) < 2:
    left, right = vector, []
else:
    left, right = cut_vector(vector)

print(*left, sep="\n")
print(*right, sep="\n")