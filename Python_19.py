```
def main():
    while True:
        cont = input("Do you want to compare numbers? (y/n): ")
        if cont.lower() != "y":
            break
        while True:
            try:
                num1 = float(input("Enter the first number: "))
                num2 = float(input("Enter the second number: "))
                check(num1, num2)  
                break
            except ValueError:
                print("Invalid input. Please enter a valid number.")


main()