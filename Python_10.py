def reverse_string(string, i):
    return string + string[:i][::-1] if i > 0 else string

def make_palindrome():
    s = input("Enter a string: ")
    for i in range(len(s)):
        if s == reverse_string(s, i):
            return s[:i][::-1] + s

result = make_palindrome()
print(result)