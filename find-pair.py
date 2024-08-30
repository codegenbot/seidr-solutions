def find_pair(n):
    for i in range(int(input())):
        nums = list(map(int, input().split()))
        target = int(input())
        for x in range(len(nums)):
            for y in range(x + 1, len(nums)):
                if nums[x] + nums[y] == target:
                    print(f"{nums[x]}")
                    print(f"{nums[y]}")
                    return