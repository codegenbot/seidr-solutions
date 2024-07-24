try:
    while True:
        n = input("Enter a positive integer: ")
        if n == "":
            print("Please provide a valid input.")
            continue
        try:
            n = int(n)
            if n > 0:
                print(sum_squares(n))
                break
            else:
                print("Please enter a positive integer.")
        except ValueError:
            print("Invalid input. Please try again.")
except Exception as e:
    print(f"An error occurred: {e}")