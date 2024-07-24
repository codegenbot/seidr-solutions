```
def add(x, y):
    return x + y

def main():
    while True:
        print("Please enter two numbers.")
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            print(add(x, y))
        except ValueError:
            print("Invalid input. Please enter a number.")

if __name__ == "__main__":
    main()