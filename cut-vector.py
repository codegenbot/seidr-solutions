def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    min_diff = float('inf')
    split_index = -1
    for i, num in enumerate(vector):
        current_sum += num
        current_diff = abs(current_sum - (total_sum - current_sum))
        if current_diff < min_diff:
            min_diff = current_diff
            split_index = i
    if split_index != -1:
        return [vector[split_index]], vector[split_index+1:]
    else:
        return vector, [0]

vector = list(map(int, input().split()))

subvector1, subvector2 = cut_vector(vector)
print(*subvector1)
print(*subvector2)