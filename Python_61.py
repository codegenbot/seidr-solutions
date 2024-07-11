def find_max_sum(lst):
    max_sum = float("-inf")
    current_sum = 0

    for num in lst:
        current_sum += num

        if current_sum > max_sum:
            max_sum = current_sum

        if current_sum < 0:
            current_sum = 0

    return max_sum