def check(lst):
    lst.sort()
    result = float('inf')
    for i in range(len(lst) - 1):
        if lst[i] != lst[i+1]:
            diff = abs(lst[i] - lst[i+1])
            result = min(result, diff)
    return result

arr = list(map(int, input().split()))
print(check(arr))