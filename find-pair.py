def find_pair(n, arr):
    seen = set()
    for num in arr:
        target = n - num
        if target in seen:
            return str(num) + "\n" + str(target)
        seen.add(num)


# Read input
num_cases = int(input())
for _ in range(num_cases):
    num_pairs = int(input())
    pair_nums = list(map(int, input().split()))
    print(find_pair(num_pairs, pair_nums))