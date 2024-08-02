```
def cut_vector(vector):
    if len(vector) == 1:
        return vector[0], [vector[0]], [vector[0]]
    
    min_diff = float('inf')
    cut_index = -1
    
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        
        if left_sum == right_sum:
            return vector[:i], vector[:i], vector[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i
    
    left_sum = sum(vector[:cut_index])
    right_sum = sum(vector[cut_index:])
    
    if left_sum == right_sum:
        return vector[:cut_index], vector[:cut_index], vector[cut_index:]
    else:
        return vector[:cut_index], vector[:cut_index], vector[cut_index:]


# Testing the function
print(cut_vector([1]))  # Output: (1, [1], [1])
print(cut_vector([1, 0]))  # Output: (1, [1], [0])
print(cut_vector([1, 10]))  # Output: (1, [1], [10])
print(cut_vector([1, 100]))  # Output: (1, [1], [100])
print(cut_vector([1, 1000]))  # Output: (1, [1], [1000])
print(cut_vector([1, 10000]))  # Output: (1, [1], [10000])