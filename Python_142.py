def sum_squares(lst):
    return sum(i**2 for i in lst)

lst = input("Enter a list of numbers separated by space: ").split()
print(sum_squares(list(map(int, lst))))