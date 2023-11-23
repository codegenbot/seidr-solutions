def add(x: int, y: int):
    return x + y

def main():
    x = int(input("Enter the first number: "))
    y = int(input("Enter the second number: "))
    result = add(x, y)
    print("The sum is:", result)

if __name__ == "__main__":
    main()