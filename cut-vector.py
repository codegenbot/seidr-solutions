def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    half_sum = total_sum // 2
    current_sum = 0
    for i in range(n):
        current_sum += vector[i]
        if current_sum >= half_sum:
            if (
                current_sum == half_sum
                or current_sum - half_sum < total_sum - current_sum
            ):
                return (vector[: i + 1], vector[i + 1 :])
            else:
                return (vector[:i], vector[i:])
    return (vector, [])


vector = []
for _ in range(int(input())):
    vector.append(int(input()))

result = cut_vector(vector)
for v in result:
    print(*v, sep="\n")