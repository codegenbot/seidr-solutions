```
def words_in_sentence(sentence):
    prime_words = []
    for word in sentence.split():
        if is_prime(len(word)):
            prime_words.append(word)
    return ' '.join(prime_words)

def is_prime(n):
    if n <= 1:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    i = 3
    while i * i <= n:
        if n % i == 0:
            return False
        i += 2
    return True