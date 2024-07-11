```
def add(x: int, y: int):
    try:
        return int(x) + int(y)
    except ValueError:
        print("Invalid input! Please enter integers.")