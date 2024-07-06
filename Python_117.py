
def select_words(s, n):
    words = s.split()
    selected_words = []
    for word in words:
        if len([c for c in word if c.isalpha() and not c.isdigit()]) == n:
            selected_words.append(word)
    return selected_words