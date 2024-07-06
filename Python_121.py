def sum_of_even_length_words(sentence):
    words = sentence.split()
    total = 0
    for word in words:
        if len(word) % 2 == 0 and len(word) > 1:
            total += len(word)
    return total