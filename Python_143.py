def words_in_sentence(sentence):
    primes = [
        i for i in range(len(sentence.split())) if all(i % j != 0 for j in range(2, i))
    ]
    return " ".join(
        [
            word
            for word, length in zip(sentence.split(), map(len, sentence.split()))
            if length in primes
        ]
    )