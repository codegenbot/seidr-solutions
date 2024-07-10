```
def find_pair():
    num_cases = int(input())
    for _ in range(num_cases):
        nums = list(map(int, input().split()))
        target = int(input())
        nums.sort()
        pairs = []
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                if nums[i] + nums[j] == target:
                    pair = (nums[i], nums[j])
                    if pair not in pairs:
                        pairs.append(pair)
        if not pairs:
            print(-1)
        else:
            pairs.sort()
            for pair in pairs:
                print(*pair)