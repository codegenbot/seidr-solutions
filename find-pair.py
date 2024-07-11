```
def find_pair():
    n = int(input())
    pair_sum = int(input())
    num_list = [int(x) for x in input().split()]
    num_list.sort()
    left = 0
    right = len(num_list) - 1

    while left < right:
        current_sum = num_list[left] + num_list[right]
        
        if current_sum == pair_sum:
            return str(num_list[left]) + "\n" + str(num_list[right])
        elif current_sum < pair_sum:
            left += 1
        else:
            right -= 1

    return "No such pair found"


print(find_pair())