```Python
def check_palindrome(input_string):
    input_string = "".join(c for c in input_string if c.isalnum()).lower()
    return input_string == input_string[::-1]

if __name__ == "__main__":
    while True:
        user_input = input("Enter a string: ")
        try:
            if not isinstance(user_input, str) or len(user_input.strip()) == 0:
                print("Please enter a non-empty string.")
            elif not user_input.isalnum():
                print("Invalid input. Please enter alphanumeric characters only.")
            else:
                break
        except Exception as e:
            print(f"Unexpected error occurred: {e}")

    print(check_palindrome(user_input))