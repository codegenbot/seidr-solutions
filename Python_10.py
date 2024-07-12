```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string)):
        postfix = string[i:]
        if postfix == postfix[::-1]:
            prefix = string[:i]
            return prefix + postfix + postfix[::-1]

def main():
    user_input = input("Enter a string: ")
    print(f"Is palindrome: {is_palindrome(user_input)}")
    print(f"Make palindrome: {make_palindrome(user_input)}")

if __name__ == "__main__":
    main()