def cut_vector(vector):
    if not vector:
        return '', ''

    total_sum = sum(vector)
    left_sum = 0
    
    min_diff = float("inf")
    split_index = 0

    for i in range(len(vector)):
        right_sum = total_sum - left_sum
        
        if (left_sum == right_sum or abs(left_sum - right_sum) < min_diff):
            min_diff = abs(left_sum - right_sum)
            split_index = i
        
        left_sum += vector[i]

    return str([x for x in vector[:split_index]]), str([x for x in vector[split_index:]])

vector = [6438, 9881, 7054, 5424, 8598, 2084, 911, 946, 4802, 3239, 3363, 8450, 6751, 879]
sub_vector1, sub_vector2 = cut_vector(vector)
print("Sub-vector 1: ", sub_vector1)
print("Sub-vector 2: ", sub_vector2)