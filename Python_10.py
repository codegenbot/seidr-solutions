def make_palindrome():
    s = input("Enter a string: ")
    while not s:
        print("Invalid input. Please enter a valid string.")
        s = input("Enter a string: ")
    char = ''
    while len(s) < 2 or s[0] != s[-1]:
        char += '#'
        s = char + s + char
    return s

print(make_palindrome())