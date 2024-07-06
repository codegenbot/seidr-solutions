def make_palindrome(string: str) -> str:
    user_input = input("Enter a string: ")
    if user_input == user_input[::-1]:
        return user_input
    else:
        return user_input + user_input[::-1]