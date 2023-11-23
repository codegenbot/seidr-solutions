def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if abs(current_sum * 2 - total_sum) <= abs(total_sum - (current_sum * 2 + num)) and current_sum >= total_sum/2:
            return vector[:i+1], vector[i+1:]
    return vector[:i+1], vector[i+1:]


vector = list(map(int, input().split()))
subvector1, subvector2 = cut_vector(vector)

print(*subvector1)
print()
print(*subvector2)