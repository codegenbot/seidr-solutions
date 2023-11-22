def find_leaders(arr):
    leaders = []
    max_right = float('-inf')
    for i in range(len(arr) - 1, -1, -1):
        if all(arr[i] >= num for num in arr[i+1:]):
            leaders.append(arr[i])
            max_right = arr[i]
    return leaders


arr = list(map(int, input().split()))

result = find_leaders(arr)
for leader in result:
    print(leader)