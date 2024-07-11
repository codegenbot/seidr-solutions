def make_palindrome():
    s = input("Enter a string: ")
    while not s:
        print("Invalid input. Please enter a valid string.")
        s = input("Enter a string: ")
    
    if len(s) < 2 or s[0] != s[-1]:
        new_s = s + s[::-1]
    return new_s

print(make_palindrome())