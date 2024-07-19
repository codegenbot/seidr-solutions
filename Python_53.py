def add(x: int, y: int) -> int:
    return x + y

try:
    a, b = map(int, input().split())
except:
    print("Please provide two integer inputs separated by a space.")
else:
    result = add(a, b)
    print(result)