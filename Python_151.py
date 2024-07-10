```
def double_the_difference(x):
    x = [x] if not isinstance(x, list) else x  
    if len(x) < 2:
        return 0
    return (max(x) - min(x)) * 2

def check(lst, func):
    return func(sum(lst))

print(check([1, 2, 3], lambda x: double_the_difference(x)))