Here is the solution to the problem:

def cut_vector(vector):
    min_diff = float('inf')
    cut_point = 0
    left_sum = 0
    
    for i in range(len(vector)):
        right_sum = sum(vector[i+1:])
        
        if left_sum == right_sum:
            return vector[:i+1], vector[i+1:]
        
        diff = abs(left_sum - right_sum)
        
        if diff < min_diff:
            min_diff = diff
            cut_point = i
    
    left_vector = vector[:cut_point]
    right_vector = vector[cut_point:]
    
    return left_vector, right_vector