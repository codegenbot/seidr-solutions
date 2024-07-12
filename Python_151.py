def check(target):
    r1 = double_the_difference(list(map(int, input().split())))
    r2 = double_the_difference(list(map(int, input().split())))
    if target == "even":
        return (r1 % 2 == 0) and (r2 % 2 == 0)
    elif target == "odd":
        return (r1 % 2 != 0) and (r2 % 2 != 0)
    else:
        return abs(r1 - r2) <= 3