strings = [input() for _ in range(int(input().strip()))]
print(max(strings, key=len))