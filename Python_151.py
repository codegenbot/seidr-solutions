def double_the_difference(lst):
    odd_sum = sum(x**2 for x in lst if x > 0 and x % 2 != 0)
    return odd_sum * 2

lst = [int(x) for x in input("Enter a list of integers separated by space: ").split()]
result = double_the_difference(lst)
print(result)