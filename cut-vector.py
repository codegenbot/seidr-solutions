def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if (
            current_sum == total_sum - current_sum
            or current_sum + num == total_sum - current_sum
        ):
            return vector[: i + 1], vector[i + 1 :]
    return vector, [0]


vector = []
while True:
    num = input().strip()
    if num == "":
        break
    vector.append(int(num))

subvector1, subvector2 = cut_vector(vector)
print(*subvector1, sep="\n")
print()
print(*subvector2, sep="\n")