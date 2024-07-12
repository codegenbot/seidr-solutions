def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

def words_in_sentence(sentence):
    def filter_prime_length_words(words):
        return [word for word in words if is_prime(len(word))]

    words = sentence.split()
    prime_length_words = filter_prime_length_words(words)
    return ' '.join(prime_length_words)