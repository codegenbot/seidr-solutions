def add(x, y):
    return x + y

try:
    x = int(input().strip())
    y = int(input().strip())
    result = add(x, y)
    print(result)
except Exception as e:
    print("Error:", e)