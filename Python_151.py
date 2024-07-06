
def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 != 0 and num > 0:
            result += num ** 2
    return result

# Test case 1:
lst = [1, 3, 5, 7, 9]
print(double_the_difference(lst)) # Output: 1 + 3 + 5 + 7 + 9 = 25

# Test case 2:
lst = [2, 4, 6, 8, 10]
print(double_the_difference(lst)) # Output: 2 + 4 + 6 + 8 + 10 = 30