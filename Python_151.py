def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0) * 2

user_input = input("Enter a list of numbers separated by spaces: ")
lst = list(map(int, user_input.split()))
result = double_the_difference(lst)
print(result)