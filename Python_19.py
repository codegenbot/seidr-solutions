```
def check(num1, num2):
    if num1 > num2:
        print(f"{num1} is greater than {num2}.")
    elif num1 < num2:
        print(f"{num1} is less than {num2}.")
    else:
        print(f"{num1} is equal to {num2}.")

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