
def add(x: int, y: int):
    try:
        return x + y
    except ValueError:
        print("Invalid input.")

OR

def add(x: int, y: int):
    x = int(input("Enter a number: "))
    y = int(input("Enter another number: "))
    return x + y