if __name__ == "__main__":
    while True:
        try:
            n = int(input("Enter a positive integer greater than 1: "))
            if n <= 1:
                print("Please enter a positive integer greater than 1.")
            else:
                result = factorize(n)
                print(result)
                break  # exit the loop if valid input is provided
        except ValueError:
            print("Please enter a valid integer.")