def count_nums(arr):
    return sum(1 for num in arr if sum(int(d) for d in str(num).replace('-', '')) > 0)