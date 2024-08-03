def double_the_sum(lst):
    return (sum(lst) - min(lst, default=0)) ** 2 if len(lst) > 1 else None