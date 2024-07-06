def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 == 1 and num > 0:
            result += num**2
    return result


# Test case 1:
lst = [1, 2, 3, 4, 5]
print(double_the_difference(lst))  # Output: 55

# Test case 2:
lst = [1, 3, 5, 7, 9]
print(double_the_difference(lst))  # Output: 120