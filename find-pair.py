def find_pair(n, numbers):
    seen = set()
    for num in numbers:
        target = n - num
        if target in seen:
            return str(num) + "\n" + str(target)
        seen.add(num)


print(find_pair(int(input().strip())), end="")
numbers = [int(x) for x in input().strip().split()]
for _ in range(int(input().strip())):
    print(find_pair(*[int(x) for x in input().strip().split()]), end=" ")