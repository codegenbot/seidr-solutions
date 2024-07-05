def add(x: int, y: int):
    return x + y

if __name__ == "__main__":
    x, y = map(int, input().strip().split())
    print(add(x, y))