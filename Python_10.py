def make_palindrome(s: str):
    def reverse_string(s: str) -> str:
        return s[::-1]

    def is_palindrome(s: str) -> bool:
        return s == s[::-1]

    for i in range(len(s) + 1):
        if is_palindrome(s[:i]):
            return reverse_string(s[:i]) + s

    return s + reverse_string(s)

result = make_palindrome(input("Enter a string: ").strip())
print(result)