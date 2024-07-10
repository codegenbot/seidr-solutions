def find_pair():
    num_cases = int(input())
    for _ in range(num_cases):
        nums = list(map(int, input().split()))
        target = int(input())
        seen = {}
        for num in nums:
            remaining = target - num
            if remaining in seen:
                print(f"{num} {remaining}")
                break
            seen[num] = 1