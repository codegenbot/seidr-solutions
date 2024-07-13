def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int) and (num % 3 == 0 or num % 4 == 0):
            total_sum += num ** 2
    return total_sum

lst = list(map(int, input("Enter the list elements (space-separated): ").split()))
if len(lst) > 0:
    print(sum_squares(lst))
else:
    print("Invalid input. Please enter a valid list of integers.")