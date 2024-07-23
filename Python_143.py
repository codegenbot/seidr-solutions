def words_in_sentence(sentence):
    prime_words = []
    for word in sentence.split():
        if all(
            int(i) != j and int(i) != (j + 1)
            for i in str(int(len(word)))
            for j in range(int(len(word)))
        ):
            prime_words.append(word)
    return " ".join(prime_words)