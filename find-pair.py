```
def find_pair(n):
    num_list = [int(x) for x in input().split()]
    target = int(input())
    num_list.sort()
    left = 0
    right = len(num_list) - 1
    while left < right:
        current_sum = num_list[left] + num_list[right]
        if current_sum == target:
            print(*[num_list[left], num_list[right]])
            return
        elif current_sum < target:
            left += 1
        else:
            right -= 1

n = int(input())
find_pair(n)