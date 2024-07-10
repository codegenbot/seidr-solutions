```
arr = list(map(int, input().split()))
if len(arr) < 2:
    print("Invalid input")
else:
    print(check(arr))
def check(lst):
    lst.sort()
    result = []
    for i in range(len(lst) - 1):
        closest_pair = (abs(lst[i] - lst[i+1]), (lst[i], lst[i+1]))
        result.append(closest_pair)
    return min(result)[0]