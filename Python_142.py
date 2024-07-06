def sum_of_squares_of_elements_at_positions_divisible_by_3_or_4(lst):
    total_sum = 0
    for i in range(len(lst)):
        if (i + 1) % 3 == 0 or (i + 1) % 4 == 0:
            total_sum += lst[i] ** 2
    return total_sum

lst = list(map(int, input("Enter a list of integers separated by space: ").split()))
print(sum_of_squares_of_elements_at_positions_divisible_by_3_or_4(lst))