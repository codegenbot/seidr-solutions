def add(x: int, y: int) -> int:
    return x + y

if __name__ == '__main__':
    x, y = map(int, input().split())
    result = add(x, y)
    print(result)