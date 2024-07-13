```
def cut_vector(vector):
    left_sum = 0
    min_diff = float('inf')
    split_index = -1

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum = sum(vector[:i]) + sum(vector[i+1:])
        
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
            
    return (
        vector[:split_index],
        vector[split_index:]
    )