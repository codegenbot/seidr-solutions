```
def solution(lst):
    difference = abs((max(lst) - min(lst)))
    return (difference * 2) + sum(i**2 for i in lst if isinstance(i, int) and i > 0)

def check(func):
    lst = [1, 2, -3, 4, 5]
    print(func(lst))

result = solution([1, 2, -3, 4, 5])
check(result)