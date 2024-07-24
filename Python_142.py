try:
    while True:
        n = input("Enter a positive integer: ").strip()
        if n == "":
            print("Bye!")
            break
        try:
            if not n.isdigit():
                raise ValueError("Invalid input")
            n = int(n)
            if n > 0:
                print(sum_squares(n))
                break
            else:
                print("Please enter a positive integer.")
        except ValueError:
            print(
                "Invalid input. Please try again. Use only numbers (e.g., 123) or leave the field blank to exit."
            )
except Exception as e:
    print(f"An error occurred: {e}")