def find_leaders(arr):
    leaders = []
    max_right = arr[0]
    leaders.append(max_right)
    
    for i in range(1, len(arr)):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders.append(arr[i])
            
    return leaders

n = int(input())
arr = list(map(int, input().split()))

result = find_leaders(arr)
print(len(result))
for leader in result:
    print(leader)