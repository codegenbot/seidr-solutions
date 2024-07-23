def find_mean(lst):
    if len(lst) == 1:
        return None
    return sum(i for i in lst) / len(lst)