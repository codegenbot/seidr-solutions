def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if current_sum == total_sum - current_sum or current_sum == total_sum - current_sum - num:
            return vector[: i + 1], vector[i + 1 :]
    return vector, []


vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except ValueError:
        break

subvector1, subvector2 = cut_vector(vector)
print(*subvector1, sep='\n')
print(*subvector2, sep='\n')