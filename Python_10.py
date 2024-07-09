def check_palindrome(string: str) -> None:
    input_string = input("Enter a string to check if it's a palindrome: ")
    if is_palindrome(input_string):
        print("The string is a palindrome.")
    else:
        print("The string is not a palindrome.")

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string)):
        if string[:i+1] == string[:i+1][::-1]:
            return string[:i+1] + string[i:][::-1]
    return string + string[::-1]