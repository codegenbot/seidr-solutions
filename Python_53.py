def add(x: int, y: int):
    return x + y

if __name__ == "__main__":
    try:
        x, y = map(int, input().strip().split())
        print(add(x, y))
    except ValueError:
        print("Please enter two integers separated by space.")