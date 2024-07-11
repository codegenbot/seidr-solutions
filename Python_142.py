def sum_squares(lst):
    total = sum(i**2 for i in lst)
    return total

lst = list(map(int, input("Enter numbers separated by space: ").split()))
print(sum_squares(lst))