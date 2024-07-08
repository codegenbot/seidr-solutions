def find_leaders(arr):
    leaders = []
    max_right = float("-inf")
    for num in reversed(arr):
        if num >= max_right:
            leaders.append(num)
            max_right = num
    return leaders


n = int(input())
arr = list(map(int, input().split()))
result = find_leaders(arr)
print(len(result))
print(*result)