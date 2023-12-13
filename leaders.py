def find_leaders(arr):
    leaders = []
    max_right = 0
    
    for num in arr[::-1]:
        if num >= max_right:
            max_right = num
            leaders.append(max_right)
    
    return leaders[::-1]

arr = list(map(int, input().split()))

result = find_leaders(arr)
for num in result:
    print(num)