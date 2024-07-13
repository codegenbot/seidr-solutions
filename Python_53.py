```Python
def add():
    while True:
        cont = input("Do you want to continue (Y/N)? ").upper()
        if cont == "N":
            return
        if cont not in ["Y", "N"]:
            print("Invalid input. Please enter Y or N.")
            continue
        while True:
            try:
                x = int(input("Enter the first number: "))
                y = int(input("Enter the second number: "))
                add_numbers(x, y)
                break
            except ValueError:
                print("Invalid input. Please enter a valid integer.")

def add_numbers(x, y):
    print(f"The sum is {x + y}")

if __name__ == "__main__":
    add()