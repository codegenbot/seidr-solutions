def main():
    while True:
        cont = input("Do you want to compare numbers? (y/n): ")
        if cont.lower() != "y":
            break
        num1 = float(input("Enter the first number: "))
        num2 = float(input("Enter the second number: "))
        check(num1, num2)  # call your comparison function with these inputs


main()