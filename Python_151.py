```
def double_the_difference(lst):
    diff = abs((max(lst) - min(lst)) // 2)
    return [i for i in lst if i == diff]

def check(lst):
    result = double_the_difference(lst)
    return result