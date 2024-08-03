def double_the_sum(lst):
    return (sum(lst) - min(lst)) * 2 if len(set(lst)) == 1 else "There is no difference"