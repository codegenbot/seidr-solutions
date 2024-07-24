```
def sum_squares(lst):
    total = 0
    for num in lst:
        total += num ** 2
    return total

numbers = [int(x) for x in input().split(',')]
print(sum_squares(list(map(int, numbers))))