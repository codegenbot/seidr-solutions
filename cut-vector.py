def cut_vector(vector):
    if len(vector) == 1:
        return [vector], []

    left_half = []
    right_half = []
    min_diff = float("inf")
    split_index = -1

    for i in range(len(vector)):
        if i > 0 and vector[i] <= vector[0]:
            break
        left_half.append(vector[i])
        right_half = vector[:i]
        diff = abs(sum(left_half) - sum(right_half))
        if diff < min_diff:
            min_diff = diff
            split_index = i

    return [left_half], [right_half]


input_vector = list(map(int, input().split()))
result1, result2 = cut_vector(input_vector)
print(*result1)
print(*result2)