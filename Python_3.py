def below_zero(operations):
    current_sum = 0
    count_below_zero = 0
    for num in operations:
        current_sum += num
        if current_sum < 0:
            count_below_zero += 1
    return count_below_zero