```
n = int(input())
try:
    arr = list(map(int, ' '.join(map(str, input().split())).split()))
    arr.sort()
except Exception as e:
    return str(e)

changes = 0
if len(set(arr)) > 1: 
    return -1

changes = 0
for i in range(1, n):
    if arr[i] != arr[0]:
        break
else:
    return n - 1

for i in range(n):
    while arr[i] != arr[0]:
        if min(arr) == max(arr):
            return -1
        arr[i], arr[0] = arr[0], arr[i]
        changes += 1

return changes