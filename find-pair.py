```
def find_pair(n):
    arr = [int(x) for x in input().split()]
    target = int(input())
    arr.sort()
    left = 0
    right = len(arr) - 1
    
    while left < right:
        current_sum = arr[left] + arr[right]
        
        if current_sum == target:
            print(*[str(x) for x in (arr[left], arr[right])])
            return
        
        elif current_sum < target:
            left += 1
        else:
            right -= 1

find_pair(int(input()))