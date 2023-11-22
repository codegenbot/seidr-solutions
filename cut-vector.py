import sys

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

lines = sys.stdin.readlines()
vector = [int(line.strip()) for line in lines]

if len(vector) == 1:
    print(vector[0])
    print(vector[0])
    exit()

left_subvector, right_subvector = cut_vector(vector)

for num in left_subvector:
    print(num)
for num in right_subvector:
    print(num)