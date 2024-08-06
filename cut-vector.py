```
def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    
    for i in range(len(vector)):
        right_sum = total_sum - left_sum
        
        if left_sum == right_sum or abs(left_sum-right_sum) < abs(left_sum-vector[i]):
            return [vector[:i+1], vector[i:]]
        
        left_sum += vector[i]
    
    return None

# test the function
print(cut_vector([1]))
print(cut_vector([1, 10]))
print(cut_vector([1, 100]))
print(cut_vector([1, 1000]))
print(cut_vector([1, 10000]))