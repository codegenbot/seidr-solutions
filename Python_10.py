```
def make_palindrome():
    s = ""
    while not s:
        print("Invalid input. Please enter a valid string.")
        s = input("Enter a string: ")

    if len(s) < 2 or s[0] != s[-1]:
        new_s = s + s[::-1]
    else:
        new_s = s
    return new_s


print(make_palindrome())