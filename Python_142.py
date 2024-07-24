```
def check(lst):
    return "yes" if sum(i**2 for i in lst) > 10 else "no"


print(check([1, 2, 3, 11, 12]))