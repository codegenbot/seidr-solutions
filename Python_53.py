def add(x, y):
    return x + y

x, y = map(int, input("Enter two space-separated integers: ").strip().split())
print(add(x, y))