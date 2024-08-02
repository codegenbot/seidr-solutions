def words_in_sentence(sentence):
    primes = [
        i
        for i in range(len(sentence.split()))
        if all(i % j != 0 for j in range(2, int(i**0.5) + 1))
    ]
    return " ".join(
        [
            word
            for word, i in zip(
                sentence.split(),
                map(str, filter(lambda x: x in primes, range(len(sentence.split())))),
            )
        ]
    )