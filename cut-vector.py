def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if abs(current_sum * 2 - total_sum) < abs(total_sum - (current_sum * 2 + num)):
            return vector[:i], vector[i:]
    return vector[:i], vector[i:]


vector = list(map(int, input().split()))
subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
print()
for num in subvector2:
    print(num)