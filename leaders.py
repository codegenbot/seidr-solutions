def find_leaders(arr):
    leaders = []
    n = len(arr)
    max_right = arr[n-1]
    leaders.append(max_right)
    for i in range(n-2, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders.append(max_right)
    leaders.reverse()
    return leaders

arr = list(map(int, input().split()))
result = find_leaders(arr)
for num in result:
    print(num)