def count_nums(arr):
    return sum(sum(map(int, str(abs(num))) for num in arr) > 0 for num in arr)