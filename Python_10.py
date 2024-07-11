```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string)):
        if string[i:] == string[i:][::-1]:
            return string + string[i:][::-1]
    return string + string[::-1]

if __name__ == "__main__":
    user_string = input("Enter a string: ")
    print(is_palindrome(user_string))
    print(make_palindrome(user_string))