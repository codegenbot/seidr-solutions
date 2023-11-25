def find_leaders(arr):
    leaders = []
    max_num = float("-inf")
    for num in arr[::-1]:
        if num >= max_num:
            leaders.append(num)
            max_num = num
    return leaders


n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))

result = find_leaders(arr)
for num in result[::-1]:
    print(num)