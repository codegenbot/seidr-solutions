Here's the solution:

def find_pair(n, nums):
    seen = {}
    for num in nums:
        if num * -1 in seen:
            return str(num) + '\n' + str(num*-1)
        else:
            seen[num] = True
    return "No pair found"

t = int(input())
for _ in range(t):
    n = int(input())
    nums = list(map(int, input().split()))
    print(find_pair(n, nums))