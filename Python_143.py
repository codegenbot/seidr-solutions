```
def words_in_sentence(sentence):
    prime_words = [word for word in sentence.split() if is_prime(len(word))]
    return ' '.join(prime_words)

def is_prime(n):
    if n <= 1:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    max_divisor = int(n**0.5) + 1
    for d in range(3, max_divisor, 2):
        if n % d == 0:
            return False
    return True