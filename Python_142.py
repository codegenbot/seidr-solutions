def sum_squares(numbers):
    return sum(i**2 for i in numbers)


def check(result):
    if result > 100:
        return "Bigger"
    elif result == 100:
        return "Equal"
    else:
        return "Smaller"


print(check(sum_squares([1, 2, 3, 11, 12])))