def check(numbers):
    return [num for num in numbers if numbers.count(num) == 1]

assert check([1, 2, 3, 2, 4, 3, 5]) == [1, 4, 5]