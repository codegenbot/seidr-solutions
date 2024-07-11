def add(x: int, y: int):
    if x < 0 and y < 0:
        return -1 * (abs(x) + abs(y))
    else:
        return x + y


print(add(2, 3))
print(add(-1, 1))
print(add(10, -5))