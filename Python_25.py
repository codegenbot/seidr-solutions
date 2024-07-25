```
def main():
    print("Enter numbers (at least 2) to factorize. Type 'quit' to exit.")
    print("Please enter a number: ")
    while True:
        user_input = input()
        if user_input.lower() == "quit":
            break
        try:
            user_input = int(user_input)
            if user_input >= 2:
                result = factorize(user_input)
                print(f"The prime factors of {user_input} are: {result}")
            else:
                print(
                    "Invalid input. Please enter an integer greater than or equal to 2."
                )
        except ValueError:
            print("Invalid input. Please enter a valid integer.")