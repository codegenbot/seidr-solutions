def check(target, expected):
    result = double_the_difference([1, 2, -3, 4, 5, 6])
    if result == expected:
        return "Test passed"
    else:
        return f"Expected {expected}, but got {result}"
    
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0)