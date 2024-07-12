def find_largest_palindromic_number(n: int) -> int:
    max_palindrome = 0
    for i in range(1, n + 1):
        str_i = str(i)
        rev_str_i = str_i[::-1]
        if str_i == rev_str_i and i > max_palindrome:
            max_palindrome = i
    return max_palindrome