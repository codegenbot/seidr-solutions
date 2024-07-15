def rounded_avg(num1, num2):
    if not isinstance(num1, int) or not isinstance(num2, int):
        return "Invalid input! Please enter integer values."
    return round((num1 + num2) / 2)


def main():
    n = 0
    while True:
        try:
            for i in range(n + 1):
                m = input(f"Enter {i+1} number: ")
                if m.isdigit():
                    result = rounded_avg(int(m), int(input("Enter second number: ")))
                    print(result)
                    choice = input(
                        "Do you want to calculate the average? (1 for yes / any key to exit) "
                    ).lower()
                    if choice == "1":
                        continue
                    else:
                        break
                else:
                    print("Invalid input! Please enter integer values.")
        except ValueError:
            print("Invalid input! Please enter integers.")


main()