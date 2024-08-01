from typing import List


def find_largest_palindrome(n: int) -> int:
    largest_palindrome = 0
    for i in range(1, n):
        if str(i) == str(i)[::-1]:
            largest_palindrome = i
    return largest_palindrome