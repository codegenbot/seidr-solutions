def average_odd(lst):
    if not lst:
        return 0
    odd_count = sum(1 for _ in lst[1::2])
    return odd_count / len(lst)