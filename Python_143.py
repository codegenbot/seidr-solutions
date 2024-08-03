def words_in_sentence(sentence):
    primes = []
    for i in range(2, int(len(sentence.split()[0]) ** 0.5) + 1):
        if len([j for j in range(2, i) if i % j == 0]) == 0:
            primes.append(i)
    return " ".join([word for word in sentence.split() if len(word) in primes])