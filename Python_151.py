def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 != 0 and num > 0:
            result += num**2
    return result


# Example usage with a list of integers
lst = [1, 3, 5, 7]
print(double_the_difference(lst))  # Output: 64