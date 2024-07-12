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
                    confirm = input("Press Enter to continue, or type 'stop' to quit: ")
                    if confirm.lower() == "stop":
                        break
                    print(response)
                else:
                    confirm = input("Press Enter to continue, or type 'stop' to quit: ")
                    if confirm.lower() == "stop":
                        break
                    print("The number is not divisible by 3")
            else:
                confirm = input("Press Enter to continue, or type 'stop' to quit: ")
                if confirm.lower() == "stop":
                    break
                print("Please enter a non-negative integer.")
        except ValueError:
            confirm = input("Press Enter to continue, or type 'stop' to quit: ")
            if confirm.lower() == "stop":
                break
            print("Invalid input. Please enter a valid integer.")


check()