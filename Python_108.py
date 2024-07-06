```
def count_nums(arr):
    return sum(1 for num in arr if sum(int(d) if d != '-' else -int(d[1:]) for d in str(abs(num))) > 0)