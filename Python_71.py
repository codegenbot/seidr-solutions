def sum_of_squares(n):
    result = 0
    for i in range(1, n + 1):
        result += i**2
    return result


while True:
    while True:
        try:
            base = float(input("Enter the base of the triangle: "))
            height = float(input("Enter the height of the triangle: "))

            if base > 0 and height > 0:
                break
            else:
                print("Please enter positive values for both base and height.")
        except ValueError:
            print("Invalid input. Please enter numbers.")

    triangle_area = (base * height) / 2
    sum_of_squares_value = sum_of_squares(int(triangle_area))
    check(triangle_area)

    while True:
        choice = input("Do you want to calculate another triangle? (yes/no): ")
        if choice.lower() == "yes":
            continue
        elif choice.lower() == "no":
            print("Thank you for using this program!")
            break
        else:
            print("Invalid input. Please enter 'yes' or 'no'.")