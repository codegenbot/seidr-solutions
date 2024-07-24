def double_the_difference():
    lst = list(map(int, input("Enter a list of numbers separated by spaces: ").split()))
    odd_sum = sum(x ** 2 for x in lst if x > 0 and x % 2 != 0)
    return odd_sum

result = double_the_difference()
print(result)