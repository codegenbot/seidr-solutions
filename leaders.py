def find_leaders(arr):
    n = len(arr)
    leaders = []
    max_right = arr[n-1]
    leaders.append(max_right)
    
    for i in range(n-2, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders.append(max_right)
    
    return leaders[::-1]

arr = list(map(int, input().split()))

result = find_leaders(arr)
for num in result:
    print(num)