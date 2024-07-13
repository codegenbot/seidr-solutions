```
def words_in_sentence(sentence):
    prime_count = 0
    for word in sentence.split():
        if is_prime(len(word)):
            prime_count += 1
    return str(prime_count)

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True