def double_the_difference():
    lst = input().split()
    return sum(x**2 for x in lst if int(x) > 0 and isinstance(int(x), int) and int(x) % 2 != 0)