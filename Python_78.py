def hex_key():
    num = input("Enter a hexadecimal number: ")
    primes = set([2, 3, 5, 7, ord('B'), ord('D')])
    count = 0
    for digit in num.upper():  
        if digit in primes:
            count += 1
    return count

print(hex_key())