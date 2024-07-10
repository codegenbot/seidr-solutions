def check(lst):
    lst.sort()
    if len(lst) < 2:
        return (0, ())
    result = []
    for i in range(len(lst) - 1):
        closest_pair = (abs(lst[i] - lst[i+1]), (lst[i], lst[i+1]))
        result.append(closest_pair)
    return min(result)

arr = list(map(int, input().split()))
print(check(arr))