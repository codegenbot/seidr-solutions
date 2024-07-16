n = int(input())
for _ in range(n):
    strings = input().split()
    print(max(strings, key=len))