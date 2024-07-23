```
def words_in_sentence(sentence):
    prime_words = []
    for word in sentence.split():
        is_prime = True
        for i in str(len(word)):
            count = str(word).count(i)
            if all(count > 0 for _ in range(int(len(word)))) or count == int(len(word)) + 1:
                is_prime = False
                break
        if is_prime:
            prime_words.append(word)
    return " ".join(prime_words)