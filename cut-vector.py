```
def cut_vector(vector):
    if any(num <= 0 for num in vector):
        return None

    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        if vector[i - 1] >= vector[i]:
            return vector[:i], vector[i:]

        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            split_index = i

    return vector[:split_index], vector[split_index:]