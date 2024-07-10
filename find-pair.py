```
def find_pair():
    num_cases = int(input())
    for _ in range(num_cases):
        nums = set(map(int, input().split()))
        target = int(input())
        for num in nums:
            complement = target - num
            if complement in nums:
                print(*[num, complement])
        print(-1)