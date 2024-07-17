def cut_vector(vector):
    left_sum = 0
    min_diff = float("inf")
    cut_index = -1

    for i in range(len(vector)):
        right_sum = sum(vector[i + 1 :])
        diff = abs(left_sum - right_sum)

        if diff == 0:
            return vector[: i + 1], [0] + vector[i + 1 :]

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return vector[: cut_index + 1], [0] + vector[cut_index + 1 :]


vector = list(map(int, input().split()))
print(cut_vector(vector)[0])
print(cut_vector(vector)[1])