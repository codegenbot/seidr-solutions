```
def hex_key(num):
    primes = set([2, 3, 5, 7, 11, 13, 17])
    count = 0
    for digit in num.upper():
        if digit.isdigit():
            if int(digit) in primes:
                count += 1
        elif digit in 'BDF':
            count += 1
    return count

while True:
    user_input = input("Enter a number (or 'stop' to stop): ")
    if user_input.lower() == 'stop':
        break
    print(hex_key(user_input))