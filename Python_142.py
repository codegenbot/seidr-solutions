```
numbers = input("Enter a list of numbers separated by space: ")
lst = [int(num) for num in numbers.split()]
print(sum_squares(lst))