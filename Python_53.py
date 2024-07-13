def add():
    total_sum = 0
    while True:
        cont = input("Do you want to continue (Y/N)? ").upper()
        if cont == "N":
            break
        if cont not in ["Y", "N"]:
            print("Invalid input. Please enter Y or N.")
            continue
        while True:
            try:
                x = int(input("Enter the first number: "))
                y = int(input("Enter the second number: "))
                total_sum += x + y
                break
            except ValueError:
                print("Invalid input. Please enter a valid integer.")
    return total_sum

print(add())