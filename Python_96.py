def count_up_to(n):
    if n <= 0:
        return []
    else:
        # Initialize a list of prime numbers up to n
        prime_numbers = [2]
        
        # Iterate from 3 to n, checking for primality
        for i in range(3, n+1, 2):
            is_prime = True
            for j in range(2, int(i**0.5) + 1):
                if i % j == 0:
                    is_prime = False
                    break
            if is_prime:
                prime_numbers.append(i)
        return prime_numbers