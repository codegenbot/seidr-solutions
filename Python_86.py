
def anti_shuffle(s):
    words = s.split()
    ordered_words = []
    for word in words:
        ordered_chars = sorted(word)
        ordered_words.append(''.join(ordered_chars))
    return ' '.join(ordered_words)