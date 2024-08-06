def cut_vector(vector):
    left_sum = 0
    right_sum = sum(vector)

    for i in range(len(vector)):
        right_sum -= vector[i]
        if abs(left_sum - right_sum) < min(abs(left_sum), abs(right_sum)):
            return (vector[: i + 1], vector[i:])

    return (vector, [0])


print(cut_vector([int(i) for i in input().split()]))