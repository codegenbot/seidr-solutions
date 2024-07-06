def words_in_sentence(sentence):
    prime_words = []
    for word in sentence.split():
        if all(word[i] != word[0] and i < len(word) - 1 for i in range(1, len(word))):
            prime_words.append(word)
    return " ".join(prime_words)