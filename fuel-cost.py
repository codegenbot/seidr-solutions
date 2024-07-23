def solve():
    values = list(map(int, input().split()))
    return sum((i // 3 - 2) for i in values if i > 0)