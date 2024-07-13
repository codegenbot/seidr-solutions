def add():
    total = 0
    while True:
        cont = input("Do you want to continue (Y/N)? ").upper()
        if cont not in ['Y', 'N']:
            print("Invalid input. Please enter Y or N.")
            continue
        if cont != 'N':
            while True:
                try:
                    num1 = int(input("Enter the first number: "))
                    total += num1
                    again = input("Do you want to add more numbers (Y/N)? ").upper()
                    if again == 'N':
                        print(f"Total: {total}")
                        break
                    elif again != 'Y':
                        print("Invalid input. Please enter Y or N.")
                except ValueError:
                    print("Invalid input. Please enter a valid integer.")
        else:
            print(f"Total: {total}")
            break

if __name__ == "__main__":
    add()