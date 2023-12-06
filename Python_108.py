def count_nums(arr):
    return sum(map(lambda x: int(str(abs(x))[0]), arr))