```
def check(func):
    def wrapper(lst):
        result = func(lst)
        if isinstance(result, (int, float)):
            return "The function {} returns a valid number.".format(func.__name__)
        else:
            return "The function {} does not return a valid number.".format(func.__name__)
    return wrapper

def double_the_difference(lst):
    if len(lst) < 2:
        return 0
    avg = sum(lst) / len(lst)
    diff = abs(max(lst) - min(lst)) - abs(avg - min(lst))
    return 2 * diff

print(check(double_the_difference)([1, 5, 3, 19, 18, 25]))