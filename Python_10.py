def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome():
    user_string = input("Enter a string: ")
    if user_string == user_string[::-1]:
        print(f"'{user_string}' is already a palindrome.")
    else:
        extended_string = user_string + user_string[::-1]
        print(f"'{extended_string}' is the palindrome version of your string.")


make_palindrome()