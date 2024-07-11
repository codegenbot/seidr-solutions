```
def sum_squares(lst):
    return sum(i**2 for i in lst)

user_input = input("Enter a list of numbers separated by spaces: ")
lst = [int(i) for i in user_input.split()]
print(sum_squares(lst))