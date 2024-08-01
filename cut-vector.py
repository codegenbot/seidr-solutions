```
def cut_vector(vector):
    if len(vector) == 1:
        return vector, []
    
    min_diff = float('inf')
    best_cut = -1
    
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        
        if left_sum == right_sum:
            return vector[:i], vector[i:]
        
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            best_cut = i
    
    left = vector[:best_cut]
    right = vector[best_cut:]
    
    return left, right

# Example usage
input_vector = [1, 0]  # Replace with your input
output_left, output_right = cut_vector(input_vector)
print(output_left)
print(output_right)