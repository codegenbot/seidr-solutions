strings = []
n = int(input())
for _ in range(n):
    strings.append(input())

strings.sort()
print(" ".join(strings))