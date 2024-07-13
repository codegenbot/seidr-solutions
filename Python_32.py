```
while True:
    try:
        while True:
            coefficients = [
                int(x) for x in input("Enter the coefficients (space separated): ").split()
            ]

            if len(coefficients) != 3 or any(c % 2 != 0 for c in coefficients):
                print("Please provide exactly three even-numbered coefficients.")
            else:
                break

        print(find_zero(coefficients))
    except ValueError as e:
        print(f"Error: {e}")
        exit()