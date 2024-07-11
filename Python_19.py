def main():
    while True:
        cont = input("Do you want to compare numbers? (y/n): ")
        if cont.lower() != "y":
            break
        num1 = None
        num2 = None
        while num1 is None or num2 is None:
            try:
                num1 = float(input("Enter the first number: "))
                num2 = float(input("Enter the second number: "))
            except ValueError:
                print("Invalid input. Please enter a valid number.")
        check(num1, num2)  # call your comparison function with these inputs


main()