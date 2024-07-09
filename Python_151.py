def check(lst):
    print(sum(i ** 2 for i in lst if isinstance(i, int) and i > 0))