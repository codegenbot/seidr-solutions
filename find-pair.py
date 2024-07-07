Here is the solution:

def find_pair(n):
    for i in range(int(input())):
        nums = [int(x) for x in input().split()]
        target = int(input())
        num_dict = {}
        for num in nums:
            if target - num in num_dict:
                print(target - num, num)
                return
            num_dict[num] = 1

find_pair(int(input()))