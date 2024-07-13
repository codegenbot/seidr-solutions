```Python
def check_palindrome():
    user_input = input("Enter a string: ")
    if len(user_input) != len(user_input[::-1]):
        print(f"'{user_input}' is not a palindrome.")
        if user_input.lower() != user_input.lower()[::-1]:
            print("It is not even spelled the same way backwards when ignoring case.")
    else:
        if user_input == user_input[::-1].lower():
            print(f"'{user_input}' is a palindrome.")
        else:
            print(f"'{user_input}' is a half-palindrome, i.e., it's the same forwards and backwards when ignoring case.")


check_palindrome()