```Python
def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if (i % 3 == 0 and i % 4 != 0) or (i % 4 == 0 and i % 3 != 0):
            total_sum += lst[i] ** 2
    return total_sum

lst = input("Enter the list of numbers (space-separated): ")
lst = [int(i) for i in lst.split()]
print(sum_squares(lst))