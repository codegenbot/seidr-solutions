```
def check(lst):
    first = min(lst)
    second = None
    for num in lst:
        if num > first:
            second = num
            break
    if second is not None:
        return (second - first) ** 2
    else:
        return 0