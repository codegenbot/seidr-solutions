```
def double_the_difference(lst):
    if len(lst) < 2:
        return None
    lst = [int(i) for i in lst]
    lst.sort()
    return (lst[-1] - lst[0]) * 2

result = double_the_difference(','.join(map(str, input("Enter elements separated by space: ").split())))
print(result)