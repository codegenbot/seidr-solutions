n = int(input())
strings = [input() for _ in range(n)]
strings.sort()
print("".join(strings))