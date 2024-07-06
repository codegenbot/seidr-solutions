
def sum_squares(lst):
    result = 0
    for i, n in enumerate(lst):
        if i % 3 == 0:
            result += n ** 2
        elif i % 4 == 0:
            result += n ** 3
        else:
            result += n
    return result