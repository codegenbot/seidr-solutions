def find_pair(n, numbers):
    seen = set()
    for num in numbers:
        if (target := n - num) in seen:
            return str(num) + "\n" + str(target)
        seen.add(num)


print(find_pair(int(input()), [int(x) for x in input().split()]))