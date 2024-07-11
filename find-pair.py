```
def find_pair():
    num_cases = int(input())
    for _ in range(num_cases):
        nums = list(map(int, input().split()))
        target = int(input())
        seen = dict()
        pairs = []
        for num in nums:
            complement = target - num
            if complement in seen:
                pairs.append((complement, num))
            else:
                seen[num] = 1
        pairs.sort(key=lambda x: sum(x))
        for pair in pairs:
            print(pair)