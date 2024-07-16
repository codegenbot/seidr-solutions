```
def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = float('inf')
    left_sum = 0
    for i in range(1, len(vector)):
        left_sum += vector[i-1]
        right_sum = total_sum - left_sum
        
        if left_sum == right_sum:  
            return vector[:i], vector[i:]
        
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    if len(vector) % 2 != 0 and all(x == vector[0] for x in vector):
        return vector[:len(vector)//2], vector[len(vector)//2:]
    return vector[:cut_index], vector[cut_index:]