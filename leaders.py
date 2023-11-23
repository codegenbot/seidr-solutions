def find_leaders(arr):
    leaders = []
    for i in range(len(arr)):
        if i == len(arr) - 1 or arr[i] >= max(arr[i + 1 :]):
            leaders.append(arr[i])
    return leaders


arr = list(map(int, input().split()))

result = find_leaders(arr)
for num in result:
    print(num)