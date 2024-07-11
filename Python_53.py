```
def add(x: int, y: int):
    return x + y

def main():
    x = int(input("Enter first number: "))
    y = int(input("Enter second number: "))
    result = add(x, y)
    print("Sum:", result)

if __name__ == "__main__":
    main()