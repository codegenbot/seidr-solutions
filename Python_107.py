def even_odd_palindrome(n):
    count_even = sum(
        1 for i in range(1, n + 1) if str(i) == str(i)[::-1] and int(str(i)) % 2 == 0
    )
    count_odd = sum(
        1 for i in range(1, n + 1) if str(i) == str(i)[::-1] and int(str(i)) % 2 != 0
    )
    return (count_even, count_odd)