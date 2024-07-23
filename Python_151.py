```Python
def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)
    return 2*odd_sum - sum(i for i in lst if isinstance(i, int))

numbers = list(map(int, input("Enter numbers separated by space: ").split()))
check(double_the_difference(numbers))