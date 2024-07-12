def is_palindrome(s: str) -> bool:
    return s == s[::-1]

def make_palindrome() -> str:
    while True:
        s = input()
        if isinstance(s, str):
            break
        else:
            print("Invalid input. Please enter a string.")
    while not is_palindrome(s):
        if len(s) % 2 == 0:
            s = s[1:-1]
        elif s[0] == s[-1]:
            s = s[1:-1]
        else:
            s = s[1] + s[0] + s[-1]
    return s

result = make_palindrome()
print(result)