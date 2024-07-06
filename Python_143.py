
def words_in_sentence(sentence):
    # Split the sentence into a list of words
    words = sentence.split()

    # Create an empty list to store the prime number words
    prime_words = []

    # Iterate over the words and check if their lengths are prime numbers
    for word in words:
        if is_prime(len(word)):
            prime_words.append(word)

    # Join the prime number words into a string with spaces between them
    return " ".join(prime_words)

def is_prime(n):
    # Check if n is greater than 1
    if n > 1:
        # Iterate from 2 to the square root of n
        for i in range(2, int(n**0.5) + 1):
            # If n is divisible by any number between 2 and the square root of n, it is not prime
            if n % i == 0:
                return False
        # If n is not divisible by any number between 2 and the square root of n, it is prime
        return True
    # If n is less than or equal to 1, it is not prime
    return False