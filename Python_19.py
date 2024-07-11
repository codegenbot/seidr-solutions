def check(a, b):
    if a > b:
        return "First number is greater"
    elif a < b:
        return "Second number is greater"
    else:
        return "Both numbers are equal"


def solve():
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))
    print(check(num1, num2))


def main():
    while True:
        cont = input("Do you want to compare numbers? (y/n): ")
        if cont.lower() != "y":
            break
        solve()


main()