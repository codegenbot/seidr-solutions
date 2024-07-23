def solve():
    return sum((int(i) // 3 - 2) for i in map(int, input().split()))