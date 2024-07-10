def add(x, y):
    return x + y

while True:
    try:
        x, y = map(int, input().strip().split())
        result = add(x, y)
        print(result)
    except Exception as e:
        print("Error:", e)
        break