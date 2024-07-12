```
def check(lst):
    if double_the_difference(lst) == sum(i for i in lst): 
        return "Equal"
    else:
        return "Not Equal"