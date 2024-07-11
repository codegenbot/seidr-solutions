def find_pair(n):
    seen = {}
    for num in [int(x) for x in input().split()]:
        complement = n - num
        if complement in seen:
            return f"{num} {complement}"
    return f"{n} not found"

print(find_pair(int(input())))