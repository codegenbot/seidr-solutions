def cut_vector(vector):
    left_sum = 0
    right_sum = sum(vector)
    
    for i in range(len(vector)):
        left_sum += vector[i]
        if left_sum == right_sum:
            return vector[:i+1], vector[i:]
        elif left_sum > right_sum:
            break
    
    half = len(vector) // 2
    if abs(sum(vector[:half]) - sum(vector[half:])) < abs(left_sum - right_sum):
        return vector[:half+1], vector[half:]
    else:
        return vector[:len(vector)//2+1], vector[len(vector)//2:]