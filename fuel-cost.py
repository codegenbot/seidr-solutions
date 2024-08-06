def solve(n):
    return sum((i // 3 - 2) for i in map(int, input().split()))