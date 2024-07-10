import sys

def reverse_string(s: str, i: int) -> str:
    return s[i - 1 :: -1]

def make_palindrome(s: str) -> str:
    for i in range(1, len(s) + 1):
        if s == reverse_string(s, i):
            return s[:i][::-1] + s
    return s + s[::-1]

try:
    input_str = sys.stdin.readline().strip()
    result = make_palindrome(input_str)
    print(result)
except:
    print("Invalid input. Please provide a valid string.")