def check(func):
    result = func()
    return double_the_difference(result) * 2 - sum(result)

check(lambda: list(map(int, input().split())))