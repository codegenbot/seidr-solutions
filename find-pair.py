```
def find_pair():
    num_cases = int(input())
    for _ in range(num_cases):
        nums = list(map(int, input().split()))
        target = int(input())
        seen = set()
        for n in sorted(nums):
            if target - n in seen:
                print(*[n, target - n])
                break
            else:
                seen.add(n)
        else:
            print(-1)