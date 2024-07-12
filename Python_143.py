def words_in_sentence(sentence):
    result = []
    primes = [
        i for i in range(2, 11) if all(i % j > 0 for j in range(2, int(i**0.5) + 1))
    ]
    for word in sentence.split():
        if len(word) in primes:
            result.append(word)
    return " ".join(result)