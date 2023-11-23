def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if current_sum == total_sum - current_sum:
            return vector[: i + 1], vector[i + 1 :-i-1]
    return vector, [0]

vector = list(map(int, input().split()))
subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
for num in subvector2:
    print(num)