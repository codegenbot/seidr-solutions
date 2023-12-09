def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_difference = float('inf')
    split_index = n
    
    for i in range(n):
        left_sum += vector[i]
        right_sum -= vector[i]
        
        if abs(left_sum - right_sum) <= abs(min_difference):
            min_difference = left_sum - right_sum
            split_index = i+1
    
    return vector[:split_index], vector[split_index:]

vector = list(map(int, input().split()))
left, right = cut_vector(vector)
print("\n".join(map(str, left)))
print("\n".join(map(str, right)))