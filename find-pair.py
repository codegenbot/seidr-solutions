def find_pair(n, numbers):
    seen = set()
    for num in numbers:
        target = -num
        if target in seen:
            return str(num) + "\n" + str(target)
        seen.add(num)


# Read input from user
n = int(input())
numbers = [int(x) for x in input().split()]
print(find_pair(n, numbers))