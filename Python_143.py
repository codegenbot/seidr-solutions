def words_in_sentence(sentence):
    prime_words = []
    for word in sentence.split():
        if is_prime(len(word)):
            prime_words.append(word)
    return " ".join(prime_words)