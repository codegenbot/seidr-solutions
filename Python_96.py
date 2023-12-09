def count_up_to(n):
    # Create a list of all numbers from 2 to n
    numbers = range(2, n+1)
    
    # Iterate over the numbers and mark as composite (not prime) if they are divisible by any number less than or equal to their square root
    for i in numbers:
        if any(j <= int(i**0.5) for j in range(2, i)):
            break
    
    # Return the list of prime numbers
    return [i for i in numbers if i not in set(range(2, int(n**0.5)+1))]