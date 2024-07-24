def find_largest_palindrome-product():
    max_palindrome = 0
    for i in range(1000, 1, -1):
        for j in range(i, 1, -1):
            product = i * j
            if str(product) == str(product)[::-1] and product > max_palindrome:
                max_palindrome = product
    return max_palindrome