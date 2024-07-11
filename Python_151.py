def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)


def check(odd_sum):
    lst = [1, 2, 3, 4, 5, 6, 7, 8, 9]  # Example list
    return double_the_difference(lst) == odd_sum


# Input the odd_sum value to check
odd_sum = int(input("Enter the odd_sum value: "))
result = check(odd_sum)
print(result)