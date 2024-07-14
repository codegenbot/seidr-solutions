def find_pair(n):
    arr = [int(x) for x in input().split()]
    target = int(input())
    seen = set()
    for num in arr:
        remaining = target - num
        if remaining in seen:
            return str(num) + '\n' + str(remaining)
        seen.add(num)

print(find_pair(int(input())))