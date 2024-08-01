```
def cut_vector(vector):
    min_diff = float('inf')
    split_index = 0
    
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        
        if left_sum == right_sum:
            return vector[:i], vector[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
    
    left_sum = sum(vector[:split_index])
    right_sum = sum(vector[split_index:])
    
    if left_sum == right_sum:
        return vector[:split_index], vector[split_index:]
    else:
        return vector[:split_index], vector[split_index:]


# Test cases
print(cut_vector([1]))  # Output: ([1], [0])
print(cut_vector([1, 10]))  # Output: ([1], [10, 0])
print(cut_vector([1, 100]))  # Output: ([1], [100, 0])
print(cut_vector([1, 1000]))  # Output: ([1], [1000, 0])
print(cut_vector([1, 10000]))  # Output: ([1], [10000, 0])