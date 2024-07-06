```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    for i in range(len(string)):
        palindromic_suffix = string[i:]
        if palindromic_suffix == palindromic_suffix[::-1]:
            return string + palindromic_suffix[::-1]

def main():
    user_input = input("Enter a string: ")
    result = make_palindrome(user_input)
    print(result)

if __name__ == "__main__":
    main()