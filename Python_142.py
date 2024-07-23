def sum_squares(lst):
    total = 0
    for i, num in enumerate(lst):
        if (i % 3 == 0 and i % 4 != 0) or (i % 2 == 1):
            total += num ** 2 if i % 4 == 0 else num ** 3
    return total

lst = input("Enter a list of numbers separated by space: ")
lst = [int(x) for x in lst.split()]
print(sum_squares(lst))