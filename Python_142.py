def sum_squares(lst):
    return sum(i**2 for i in lst)


def check(result):
    if result > 25:
        return "Result too high"
    else:
        return "Result is low"


print(check(sum_squares([1, 2, 3, 11, 12])))