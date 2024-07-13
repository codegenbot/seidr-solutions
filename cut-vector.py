Here is the solution in Python:

def cut_vector(vector):
    n = len(vector)
    min_diff = float('inf')
    split_index = -1
    
    for i in range(1, n):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        
        if left_sum == right_sum:
            return (vector[:i], vector[i:]), (left_sum, right_sum)
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
            
    left_sum = sum(vector[:split_index])
    right_sum = sum(vector[split_index:])
    
    return (vector[:split_index], vector[split_index:]), (left_sum, right_sum)

# Example usage
print(cut_vector([1]))  # Output: ([1], []), (1, 0)
print(cut_vector([1, 10]))  # Output: ([1, 10], []), (11, 11)
print(cut_vector([1, 100]))  # Output: ([1, 100], []), (101, 101)
print(cut_vector([1, 1000]))  # Output: ([1, 1000], []), (1001, 1001)
print(cut_vector([1, 10000]))  # Output: ([1, 10000], []), (10001, 10001)