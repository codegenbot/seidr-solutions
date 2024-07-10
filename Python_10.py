def reverse_string(string, i):
    return string + string[i-1::-1] if i > 0 else string

def make_palindrome():
    s = input("Enter a string: ").strip()
    for i in range(len(s)):
        if s == reverse_string(s, i):
            return s[:i][::-1] + s
    return s + s[::-1]

result = make_palindrome()
print(result)