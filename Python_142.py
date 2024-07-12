```
def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, int) or isinstance(num, float):
            total += num ** 2
    return total

numbers = list(map(float, input("Enter space-separated numbers: ").split()))
print(sum_squares(numbers))