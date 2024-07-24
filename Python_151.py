```
def double_the_difference(arr):
    arr.sort()
    diff = (arr[-1] - arr[0]) // 2
    result = [x for x in arr if abs(x - diff) <= 1]
    return len(result)

def check(func, arg):
    return func(arg)

print(check(double_the_difference, [1, 5, 3, 19, 18, 25]))