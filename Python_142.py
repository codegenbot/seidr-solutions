import ast

lst = ast.literal_eval(input("Enter a list of numbers (space-separated): "))
print(sum_squares(lst))