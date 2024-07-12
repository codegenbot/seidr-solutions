import random

def make_palindrome() -> str:
    while True:
        length = random.randint(1, 1000)
        s = ''.join(random.choice('abcdefghijklmnopqrstuvwxyz') for _ in range(length))
        if s == s[::-1]:
            break
    return s

result = make_palindrome()
print(result)