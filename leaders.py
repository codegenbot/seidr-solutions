def find_leaders(arr):
    leaders = []
    max_right = float('-inf')
    for i in reversed(range(len(arr))):
        if arr[i] > max_right:
            max_right = arr[i]
            leaders.append(max_right)
    return leaders[::-1]

n = int(input())
arr = list(map(int, input().split()))

result = find_leaders(arr)
print(len(result))
for leader in result:
    print(leader)