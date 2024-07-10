def is_palindrome(string: str) -> bool:
    if string == string[::-1]:
        print("Welcome to the palindrome checker!")
        return True
    else:
        print("Welcome to the palindrome checker!")
        return False


def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        print("Welcome to the palindrome maker!")
        return string + "madam"
    else:
        for i in range(len(string)):
            if string[:i] + string[i:][::-1] == string[i:][::-1]:
                print("Welcome to the palindrome maker!")
                return string[:i] + string[i:][::-1] + string[i:][::-1]
        print("Welcome to the palindrome maker!")
        return string + "not a palindrome"