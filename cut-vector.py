def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float('inf')
    cut_index = 0
    
    for i in range(n):
        left_sum += vector[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)
        
        if diff < min_diff:
            min_diff = diff
            cut_index = i + 1
    
    return vector[:cut_index], vector[cut_index:]

vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

left, right = cut_vector(vector)
print(*left, sep='\n')
print(*right, sep='\n')