import random

def make_palindrome() -> str:
    while True:
        s = ''.join(random.choice('abcdefghijklmnopqrstuvwxyz') for _ in range(3))
        if is_palindrome(s):
            break
    return s

result = make_palindrome()
print(result)