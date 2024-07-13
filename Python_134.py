```
def check_palindrome(input_string):
    input_string = "".join(c for c in input_string if c.isalnum()).lower()
    return input_string == input_string[::-1]

if __name__ == "__main__":
    try:
        user_input = input("Enter a string: ")
        print(check_palindrome(user_input))
    except RuntimeError:
        print("Program did not receive expected input")