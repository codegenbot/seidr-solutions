```
def is_palindrome(string: str) -> bool:
    if string == string[::-1]:
        print("Welcome to the 'Is Palindrome' program!")
        return True
    else:
        print("This program checks whether a given input string is palindrome.")
        return False

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        print("The given string is a palindrome. Adding 'madam' to it.")
        return string + "madam"
    else:
        for i in range(len(string)):
            if string[:i] + string[i:][::-1] == string[i:][::-1]:
                print(f"Creating a new palindrome by adding {string[i:][::-1]} at the end of the input string.")
                return string[:i] + string[i:][::-1] + string[i:][::-1]
        print("The given string is not a palindrome. Adding 'not a palindrome' to it.")
        return string + "not a palindrome"