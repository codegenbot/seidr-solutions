
def words_in_sentence(sentence):
    prime_numbers = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
    words = sentence.split()
    result = []
    for word in words:
        if len(word) in prime_numbers:
            result.append(word)
    return " ".join(result)