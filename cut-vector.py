```
def cut_vector(vector):
    total_sum = sum(vector)
    
    for i in range(len(vector)):
        left_sum = 0
        right_sum = total_sum - left_sum
        
        while left_sum < right_sum:
            left_sum += vector[i]
            right_sum -= vector[i]
        
        if left_sum == right_sum:
            return [vector[:i+1], vector[i:]]