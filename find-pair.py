Here is the solution:

def find_pair():
    num_pairs = int(input())
    pairs = []
    for _ in range(num_pairs):
        n = int(input())
        nums = list(map(int, input().split()))
        target = int(input())
        for i in range(n-1):
            for j in range(i+1, n):
                if nums[i] + nums[j] == target:
                    pairs.append((nums[i], nums[j]))
    return pairs