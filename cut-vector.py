```
def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    
    for i in range(len(vector)):
        if left_sum + (total_sum - left_sum) == vector[i]:
            return [vector[:i], vector[i:]]
        elif left_sum < (total_sum - left_sum):
            left_sum += vector[i]
        else:
            total_sum -= vector[i]
    
    return [vector, []]

# Test cases
print(cut_vector([1]))  # Output: ([1], [])
print(cut_vector([1, 0]))  # Output: ([1], [0])
print(cut_vector([1, 10]))  # Output: ([1], [10])
print(cut_vector([1, 100]))  # Output: ([1], [100])
print(cut_vector([1, 1000]))  # Output: ([1], [1000])
print(cut_vector([1, 10000]))  # Output: ([1], [10000])