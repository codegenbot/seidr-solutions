def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

lst = input("Enter a list of numbers separated by spaces: ").split()
lst = [int(x) for x in lst]
result = double_the_difference(lst)
print(result)