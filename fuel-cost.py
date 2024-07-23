def solve():
    return sum((round(i/3) - 2) for i in map(int, input().split()))