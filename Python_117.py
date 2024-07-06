def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        if word[0].isdigit():
            result.append(word)
    return result