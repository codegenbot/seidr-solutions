def count_words(input_string: str):
    words = input_string.split()
    word_count = {word: 0 for word in set(words)}
    for word in words:
        if word.isalpha():
            word_count[word] += 1
    return dict(sorted(word_count.items()))