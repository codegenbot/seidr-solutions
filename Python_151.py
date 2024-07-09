def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0) * 2 - max(lst)


def check(num1, num2, lst):
    if abs((double_the_difference(lst)) - (num1 + num2)) <= 0.00001:
        print("Yes")
    else:
        print("No")