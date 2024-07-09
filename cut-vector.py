```
def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        if left_sum == right_sum:
            return vector[:i], vector[i:]
        diff = abs(left_sum - right_sum)
        if (diff < min_diff and 
           all(x == y for x, y in zip(sorted([left_sum, right_sum]), [right_sum, left_sum]))):
            min_diff = diff
            split_index = i
    return vector[:split_index], vector[split_index:]

input_vector = [1, 2, 3, 4, 5]
left_vector, right_vector = cut_vector(input_vector)
print("Left Vector: ", left_vector)
print("Right Vector: ", right_vector)