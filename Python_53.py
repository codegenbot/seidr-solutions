def add(x: int, y: int):
    return x + y


if __name__ == "__main__":
    x, y = map(int, input().split())
    print(add(x, y))