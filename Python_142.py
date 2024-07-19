def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, (int, float)):
            total_sum += num ** 2
        else:
            print("Invalid input. Please enter numbers only.")
    return total_sum