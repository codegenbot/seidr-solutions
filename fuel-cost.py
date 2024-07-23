def solve():
    numbers = list(map(int, input().split()))
    return sum((num // 3) - 2 for num in numbers)