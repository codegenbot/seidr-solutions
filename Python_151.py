```
def double_the_difference(lst):
    result = []
    for i in range(1, len(lst)):
        result.append((lst[i] - lst[i-1]) * 2)
    return result


def check(lst, func):
    return func(lst)


print(check([1, 2, 3], lambda x: double_the_difference(x)))