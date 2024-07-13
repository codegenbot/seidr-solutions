inputs = [int(input()) for _ in range(int(input()))]
print(sum(max(0, num // 3 - 2) for num in inputs))