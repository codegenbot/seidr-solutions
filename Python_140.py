def get_word_count(text):
    text = text.replace('-', ' ')
    words = text.split(' ')
    return len(words)