try:
    while True:
        n = input("Enter a positive integer: ")
        if not n:
            print("Bye!")
            break
        if n.isdigit():
            n = int(n)
            if n > 0:
                print(sum_squares(n))
                break
            else:
                print("Please enter a positive integer.")
        else:
            print(
                "Invalid input. Please try again. Use only numbers (e.g., 123) or leave the field blank to exit."
            )
except Exception as e:
    print(f"An error occurred: {e}")