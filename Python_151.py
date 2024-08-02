def double_the_difference(numbers): 
    odd_sum = sum(i for i in numbers if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return abs(sum(i**2 for i in numbers if isinstance(i, int)) - (2 * odd_sum))