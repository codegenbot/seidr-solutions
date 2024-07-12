```
def check_sum(lst):
    if double_the_difference(lst) == sum(i for i in lst):
        return True
    else:
        return False