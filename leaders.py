def find_leaders(arr):
    leaders = []
    max_right = arr[-1]
    
    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders.append(max_right)
    
    leaders.append(max_right)
    leaders.reverse()
    
    return leaders

n = int(input())
arr = list(map(int, input().split()))

result = find_leaders(arr)
print(len(result))
print(*result)