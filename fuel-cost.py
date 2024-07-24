n = input()
total = sum(max(0, int(x) // 3 - 2) for x in n.split())
print(total)