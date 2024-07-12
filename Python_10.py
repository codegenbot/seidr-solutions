import random

def make_palindrome()-> str:
    while True:
        s = ''.join(random.choice('abcdefghijklmnopqrstuvwxyz') for _ in range(5))
        if is_palindrome(s):
            break
    return s

def is_palindrome(s: str)-> bool:
    return s == s[::-1]

result = make_palindrome()
print(result)