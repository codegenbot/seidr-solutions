def find_pair():
    num_cases = int(input())
    for _ in range(num_cases):
        nums = list(map(int, input().split()))
        target = int(input())
        seen = dict()
        for num in nums:
            complement = target - num
            if complement in seen:
                print((complement, num))
                break
            else:
                seen[num] = 1