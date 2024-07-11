```
def make_palindrome():
    s = input("Enter a string: ")
    while not s:
        print("Invalid input. Please enter a valid string.")
        s = input("Enter a string: ")
    while len(s) < 2 or s[0] != s[-1]:
        middle = (len(s)) // 2
        for i in range(len(s)):
            if i < middle:
                j = len(s) - 1 - i
            else:
                j = i
            if s[i] == s[j]:
                s = s[:i] + s[i:j+1][::-1] + s[i+1:]
        break
    return s

print(make_palindrome())