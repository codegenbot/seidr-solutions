```
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        try:
            if isinstance(num, int) and (num % 3 == 0 or num % 4 == 0):
                total_sum += num ** 2
        except ValueError:
            pass
    return total_sum

lst = list(map(int, input("Enter the list elements (space-separated): ").split()))
print(sum_squares(lst))