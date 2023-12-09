def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    
    for i in range(n):
        left_sum += vector[i]
        right_sum -= vector[i]
        
        if left_sum == right_sum or abs(left_sum - right_sum) <= 1:
            return vector[:i+1], vector[i+1:]
    
    return vector, [0]

input_string = input()
vector = list(map(int, input_string.split()))

left, right = cut_vector(vector)
print("\n".join(map(str, left)))
print("\n".join(map(str, right)))