def digits(n):
    even_product = 1
    for digit in str(n):
        if int(digit) % 2 == 0:  
            even_product *= int(digit)
    return even_product