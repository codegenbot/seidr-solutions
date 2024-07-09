def increment_numbers(l):
    return [num + 1 for num in l]

def check(func):
    result = func([1, 2, 3])
    return result

check(increment_numbers)