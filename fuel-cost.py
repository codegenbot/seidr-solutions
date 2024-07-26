n = int(input())
total = sum((x//3) - 2 for x in range(n))

print(total)