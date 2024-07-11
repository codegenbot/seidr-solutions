def double_the_difference(lst):
    evens = [i for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0]
    sum_evens = sum(evens)
    return (sum_evens - len(evens)) * 2