from typing import List


def find_largest_palindrome(n: int) -> List[int]:
    largest_palindrome = []
    for i in range(1, n + 1):
        if str(i) == str(i)[::-1] and i > 1:
            largest_palindrome.append(int(str(i) ** 2))
    return largest_palindrome