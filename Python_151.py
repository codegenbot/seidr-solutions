def double_the_difference(nums):
    small = min(nums)
    large = max(nums)
    diff = large - small
    return 2 * diff


lst = input("Enter a list of integers: ")
print(double_the_difference(lst))