def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    for i in range(len(vector)):
        right_sum = total_sum - left_sum
        if left_sum == right_sum:
            return (vector[: i + 1], vector[i:])
        elif abs(left_sum - right_sum) < abs(left_sum - right_sum + vector[i]):
            return (vector[:i], vector[i:])
    return (vector, [])


print(cut_vector([int(i) for i in input().split()]))