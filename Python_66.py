def check():
    while True:
        num = input("Enter a number: ")
        try:
            n = int(num.strip())
            if n != 0 and n >= 0:
                if sumOfDigits(n) % 3 == 0:
                    response = input(
                        "Please enter your expected response (any non-empty string): "
                    )
                    while not response.strip():
                        print("Invalid input. Please enter a valid response.")
                        response = input(
                            "Please enter your expected response (any non-empty string): "
                        )
                    print(response)
                else:
                    print("The number is not divisible by 3")
            else:
                print("Please enter a non-negative integer.")
        except ValueError:
            print("Invalid input. Please enter a valid integer.")


check()