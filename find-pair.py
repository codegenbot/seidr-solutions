def find_pair():
    num_cases = int(input())
    for _ in range(num_cases):
        nums = list(map(int, input().split()))
        target = int(input())
        seen = set()
        pairs = []
        for num in nums:
            complement = target - num
            if complement in seen:
                pairs.append((complement, num))
            seen.add(num)
        print(pairs)