```
def cut_vector(vector):
    min_diff = float('inf')
    split_index = 0
    
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        
        if left_sum == right_sum:
            return vector[:i], vector[i:]
        
        diff = abs(left_sum - right_sum)
        
        if diff < min_diff:
            min_diff = diff
            split_index = i
    
    left_half = vector[:split_index]
    right_half = vector[split_index:]
    
    return left_half, right_half

# Test cases
print(cut_vector([1]))  # ([1], [0])
print(cut_vector([1, 10]))  # ([1], [10, 0])
print(cut_vector([1, 100]))  # ([1], [100, 0])
print(cut_vector([1, 1000]))  # ([1], [1000, 0])
print(cut_vector([1, 10000]))  # ([1], [10000, 0])