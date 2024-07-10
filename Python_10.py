def reverse_string(string, i):
    return string + string[:i][::-1] if i > 0 else string

def make_palindrome(s):
    s = s.lower().strip()
    for i in range(len(s)):
        if s == reverse_string(s, i):
            return s[:i][::-1] + s

input_string = str(raw_input("Enter a string: "))
result = make_palindrome(input_string)
print(result)