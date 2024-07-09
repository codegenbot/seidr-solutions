lst = input("Enter a list of numbers (separated by spaces): ")
lst = [int(x) for x in lst.split()]
result = sum_squares(lst)
print(result)