```
def solve(num1, num2):
    return num1 - num2

def check(func):
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))

    if func(num1, num2) > 0:
        print(f"{num1} is greater than {num2}")
    elif func(num1, num2) == 0:
        print(f"{num1} is equal to {num2}")
    else:
        print(f"{num1} is less than {num2}")

def main():
    check(solve)

if __name__ == "__main__":
    main()