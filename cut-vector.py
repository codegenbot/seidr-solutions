def cut_vector(vector):
    vector_sum = sum(vector)
    current_sum = 0
    closest_sum = float('inf')
    closest_index = None

    for i, num in enumerate(vector):
        current_sum += num
        if current_sum == vector_sum / 2:
            return vector[:i+1], vector[i+1:]
        elif abs(current_sum - vector_sum / 2) < abs(closest_sum - vector_sum / 2):
            closest_sum = current_sum
            closest_index = i

    return vector[:closest_index+1], vector[closest_index+1:]

print(cut_vector([1, 0]))
print(cut_vector([1, 10]))
print(cut_vector([1, 100]))
print(cut_vector([1, 1000]))
print(cut_vector([1, 10000]))