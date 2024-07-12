```
def main():
    while True:
        num1 = int(input("Enter first number: "))
        try:
            num2 = int(input("Enter second number: "))
            print(f"The sum is {add(num1, num2)}")
            cont = input("Do you want to continue? (y/n): ")
            if cont.lower() == "n":
                print("Program ended.")
                break
            elif cont.lower() == "y":
                break
        except ValueError:
            print("Invalid input. Please enter a valid number.")