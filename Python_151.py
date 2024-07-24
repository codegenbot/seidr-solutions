def double_the_difference(numbers):
    total = 0
    for num in numbers:
        if isinstance(num, int) and num >= 0:
            if num % 2 != 0:
                total += num**2
    return total


print("{} is the result".format(double_the_difference([1, 3, 5])))