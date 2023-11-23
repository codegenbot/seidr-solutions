def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if current_sum * 2 == total_sum + num or current_sum * 2 + num == total_sum * 2 or current_sum * 2 - num == total_sum * 2:
            return vector[: i + 1], vector[i + 1 :]
    return vector[: i + 1], vector[i + 1 :]

vector = list(map(int, input().split()))
subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
print()
for num in subvector2:
    print(num)