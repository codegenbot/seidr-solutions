def hex_key(num):
    # Initialize a counter for the number of prime digits
    count = 0
    
    # Iterate over each digit in the input string
    for digit in num:
        # Convert the current digit to an integer
        n = int(digit, 16)
        
        # Check if the integer is a prime number
        if n > 1 and all(n % i != 0 for i in range(2, int(n ** 0.5) + 1)):
            count += 1
    
    return count