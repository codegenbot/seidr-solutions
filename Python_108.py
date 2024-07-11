def count_nums(arr):
    return sum(sum(int(d) for d in str(abs(num))) > 0 for num in arr)