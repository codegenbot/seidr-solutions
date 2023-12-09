def count_nums(arr):
    return len([x for x in arr if sum(map(int, str(abs(x)))) > 0])