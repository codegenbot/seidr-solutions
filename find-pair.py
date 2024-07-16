def find_pair(n, numbers):
    seen = set()
    for num in numbers:
        if (target := 12 - num) in seen:
            return "{} {}".format(num, target)
        seen.add(num)


n = int(input())
numbers = [int(x) for x in input().split()]
print(find_pair(n, numbers))