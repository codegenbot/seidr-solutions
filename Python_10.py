def make_palindrome():
    s = input("Enter a string: ").strip()
    for i in range(len(s) + 1):  # Change range to include len(s)
        if s == reverse_string(s, i):
            return s[:i][::-1] + s
    return s + s[::-1]

result = make_palindrome()
print(result)