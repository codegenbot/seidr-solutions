def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 == 1 and num > 0:
            result += num**2
    return result


# Example usage:
lst = [3, 5, 7]
result = double_the_difference(lst)
print(result)  # Output: 64 (3**2 + 5**2 + 7**2)