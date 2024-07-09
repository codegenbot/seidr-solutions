```
def sum_squares(lst):
    total = 0
    for num in lst:
        if num % 3 == 0 and num % 4 != 0:
            total += num ** 2
        elif num % 4 == 0 and num % 3 != 0:
            total += num ** 3
    return total

lst = list(map(int, input("Enter a space-separated list of numbers: ").split()))

print(sum_squares(lst))