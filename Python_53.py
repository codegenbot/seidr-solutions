def add(x: int, y: int) -> int:
    return x + y

result = add(*map(int, input().split()))
print(result)