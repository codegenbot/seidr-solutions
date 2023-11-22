def find_leaders(arr):
    leaders = []
    n = len(arr)
    max_right = arr[n - 1]
    leaders.append(max_right)
    for i in range(n - 2, -1, -1):
        if arr[i] >= max_right:
            leaders.append(arr[i])
            max_right = arr[i]
    return leaders


n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))

result = find_leaders(arr)
print(len(result))
for num in result:
    print(num)