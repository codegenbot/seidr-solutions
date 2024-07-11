def double_the_difference(numbers):
    first_half = sum(i for i in numbers[:len(numbers)//2])
    second_half = sum(i for i in numbers[len(numbers)//2:])
    return 2 * abs(first_half - second_half)