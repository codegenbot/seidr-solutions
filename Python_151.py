def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 != 0 and num > 0:
            result += num**2
    return result


result = double_the_difference([1, 3, 5, 7, 9])
print(result)