def find_leaders(arr):
    leaders = []
    max_right = float("-inf")
    for num in arr[::-1]:
        if num >= max_right:
            leaders.append(num)
            max_right = num
    return leaders


arr = list(map(int, input().split()))
result = find_leaders(arr)
for num in result:
    print(num, end=" ")