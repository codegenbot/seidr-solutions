```
def sum_squares(lst):
    total = sum(len(str(num)) ** len(str(num)) for num in lst)
    return total