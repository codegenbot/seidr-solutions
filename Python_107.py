Here is the completed code:

def even_odd_palindrome(n):
    even = sum(1 for i in range(1, n+1) if str(i) == str(i)[::-1] and i % 2 == 0)
    odd = sum(1 for i in range(1, n+1) if str(i) == str(i)[::-1] and i % 2 != 0)
    return even, odd