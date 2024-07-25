```
def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total += lst[i] ** 3
    return total

lst = input("Enter a list of numbers separated by space: ")
lst = [int(i) for i in lst.split()]
print(sum_squares(lst))