def sum_squares(lst):
    return sum([i**2 for i in lst])


def check(num):
    if num % 3 == 0:
        return "SolveMeFirst"
    else:
        return "NotHuge"


print(check(sum_squares([1, 2, 3])))