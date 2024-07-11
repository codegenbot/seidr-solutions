def make_palindrome():
    s = input("Enter a string: ")
    while not s:
        print("Invalid input. Please enter a valid string.")
        s = input("Enter a string: ")
    if len(s) < 2 or s[0] != s[-1]:
        new_s = ""
        for c in s:
            new_s += c
            if new_s == new_s[::-1]:
                break
            elif len(new_s) > len(s):
                new_s = s
                break
        s = new_s
    return s

print(make_palindrome())