def words_in_sentence(sentence):
    prime_words = []
    for word in sentence.split():
        if len(word) <= 2 and sorted(word[0] + word[-1]) == list(sorted(word)):
            prime_words.append(word)
    return " ".join(prime_words)