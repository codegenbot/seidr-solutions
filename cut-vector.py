```
def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if abs(left_sum - right_sum) == left_sum // 2 or left_sum == right_sum:
            return vector[:i], vector[i:]
        elif min(abs(left_sum - right_sum), abs(sum(vector[:i+1]) - sum(vector[i:]))) < min_diff:
            min_diff = min(abs(left_sum - right_sum), abs(sum(vector[:i+1]) - sum(vector[i:])))
            split_index = i

    return vector[:split_index], vector[split_index:]

vector=[8557, 9718, 6389, 7489, 2723, 5260, 2296, 9970]
print(cut_vector(vector))