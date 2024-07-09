def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0) * 2

lst = list(map(int, input("Enter a list of numbers separated by space: ").split()))
odd_sum = double_the_difference(lst)
print(odd_sum)