def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    current_diff = float('inf')
    for i in range(len(vector)):
        current_sum += vector[i]
        diff = abs(2 * current_sum - total_sum)
        if diff <= current_diff:
            current_diff = diff
            split_index = i
    return vector[:split_index+1], vector[split_index+1:]

print(cut_vector([1, 0]))
print(cut_vector([1, 10]))
print(cut_vector([1, 100]))
print(cut_vector([1, 1000]))
print(cut_vector([1, 10000]))