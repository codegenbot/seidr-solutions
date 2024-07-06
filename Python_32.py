def find_zero(xs):
    total_sum = sum(xs)
    if total_sum == 0:
        return 0
    left_sum = 0
    right_sum = sum(xs[len(xs)//2+1:])
    for i in range(len(xs) // 2):
        left_sum += xs[i]
    return -(left_sum - right_sum) / (right_sum + left_sum)