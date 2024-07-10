def find_pair():
    num_cases = int(input())
    for _ in range(num_cases):
        num_pairs = int(input())
        nums = list(map(int, input().split()))
        target = int(input())
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                if nums[i] + nums[j] == target:
                    print(nums[i], nums[j])