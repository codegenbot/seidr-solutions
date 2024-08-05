def below_zero(numbers):
    count = sum(1 for num in numbers if num < 0)
    return count