def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float("inf")
    cut_index = -1

    if n == 1:
        return [vector[0]], [vector[0]]

    for i in range(n):
        left_sum += vector[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return vector[: cut_index + 1], vector[cut_index + 1 :]


vector = []
try:
    while True:
        num = int(input())
        vector.append(num)
except EOFError:
    pass

if len(vector) <= 2:
    for num in vector:
        print(num)
        print(num)
    exit()

left_subvector, right_subvector = cut_vector(vector)
for num in left_subvector:
    print(num)
for num in right_subvector:
    print(num)