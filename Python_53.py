def add(x: int, y: int) -> int:
    try:
        x = int(input())
        y = int(input())
        return x + y
    except:
        return -1