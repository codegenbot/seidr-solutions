def add(x: int, y: int):
    return x + y

if __name__ == "__main__":
    x = int(input("Enter the value of x: "))
    y = int(input("Enter the value of y: "))
    result = add(x, y)
    print("Sum:", result)