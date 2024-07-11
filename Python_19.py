```
def solve(num1, num2):
    if num1 > num2:
        return "Greater"
    elif num1 < num2:
        return "Less"
    else:
        return "Equal"

def check(func):
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))

    result = func(num1, num2)

    if result == "Greater":
        print(f"{num1} is greater than {num2}")
    elif result == "Less":
        print(f"{num1} is less than {num2}")
    else:
        print(f"{num1} is equal to {num2}")

def main():
    check(solve)

if __name__ == "__main__":
    main()