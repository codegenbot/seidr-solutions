def find_leaders(arr):
    leaders = []
    max_value = arr[-1]
    leaders.append(max_value)

    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= max_value:
            max_value = arr[i]
            leaders.append(max_value)

    return leaders[::-1]

n = int(input())
arr = list(map(int, input().split()))

result = find_leaders(arr)
print(len(result))
for leader in result:
    print(leader)