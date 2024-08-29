def cut_vector(vector):
    left_sum = 0
    min_diff = float("inf")
    min_index = -1

    for i in range(len(vector)):
        right_sum = sum(vector[i + 1 :])

        if left_sum == right_sum:
            return [vector[:i]], [vector[i:]]

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            min_index = i

    left_half = vector[:min_index]
    right_half = vector[min_index:]

    return [left_half], [right_half, 0]


# Example usage:
vector = list(map(int, input().split()))
result1, result2 = cut_vector(vector)
print(*result1)
print(*result2)