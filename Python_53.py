```
def add(x: int, y: int):
    return x + y

def main():
    a = int(input("Enter first number: "))
    b = int(input("Enter second number: "))
    print(f"The sum of {a} and {b} is {add(a, b)}")

if __name__ == "__main__":
    main()