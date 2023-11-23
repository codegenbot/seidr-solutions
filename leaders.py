def find_leaders(arr):
    leaders = []
    max_right = 0
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders.append(arr[i])
    return leaders

n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))

result = find_leaders(arr)
for num in result:
    print(num)