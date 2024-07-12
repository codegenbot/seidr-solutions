import random


def make_palindrome() -> str:
    while True:
        s = "".join(random.choice("abcdefghijklmnopqrstuvwxyz") for _ in range(5))
        if is_palindrome(s):
            break
    return s


def is_palindrome(s: str) -> bool:
    return s == s[::-1]


result = input(
    "Enter your desired output (or press enter to get a random palindrome): "
)
if not result.lower():
    print(make_palindrome())
else:
    if is_palindrome(result):
        print("It's already a palindrome.")
    else:
        print(f"It's not a palindrome. A random one is: {make_palindrome()}")