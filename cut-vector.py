```
def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            return ([vector[:i], vector[i:]]), f"The cut index is {i} and the sums are {left_sum} and {right_sum}"
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    return ([vector[:split_index], vector[split_index:]]), f"The cut index is {split_index} and the sums are {sum(vector[:split_index])} and {sum(vector[split_index:])}"