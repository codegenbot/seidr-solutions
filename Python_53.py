def add(x: int, y: int):
    return x + y

result = add(*map(int, input().split()))
print(result)