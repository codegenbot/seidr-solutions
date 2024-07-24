```
def cut_vector(vector):
    n = len(vector)
    min_diff = float("inf")
    split_index = -1

    for i in range(n // 2):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i+1:])

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            split_index = i

    if n % 2 == 0:
        return [vector[:split_index + 1], vector[split_index + 1 :]]
    else:
        left_sum += vector[n // 2]
        right_sum = sum(vector[n // 2 + 1:])

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            return [vector[:n // 2 + 1], vector[n // 2 + 1 :]]
        else:
            return [vector[:split_index + 1], vector[split_index + 1 :]]