def reverse_string(s: str, i: int) -> str:
    return s[i-1::-1]

def make_palindrome() -> str:
    s = input("Enter a string: ").strip()
    for i in range(1, len(s) + 1):
        if s == reverse_string(s, i):
            return s[:i][::-1] + s
    return s + s[::-1]

result = make_palindrome()
print(result)