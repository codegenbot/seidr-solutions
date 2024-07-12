def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for char in "abcdefghijklmnopqrstuvwxyz":
        new_string = char + string + char
        if new_string == new_string[::-1]:
            return new_string


if __name__ == "__main__":
    user_input = input("Enter a string: ")
    print(make_palindrome(user_input))