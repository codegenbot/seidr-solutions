def count_nums(arr):
    return sum(sum(int(i) for i in str(abs(num))) > 0 for num in arr)