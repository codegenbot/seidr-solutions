```
def check_if_last_char_is_a_letter(user_input):
    return not user_input[-1].isalnum()

def check_palindrome():
    user_input = input("Enter a string: ").lower()
    if len(user_input) != len(user_input[::-1]):
        print(f"'{user_input}' is not a palindrome.")
        if user_input.lower() != user_input[::-1].lower():
            print("It is not even spelled the same way backwards when ignoring case.")
    else:
        print(f"'{user_input}' is a palindrome.")