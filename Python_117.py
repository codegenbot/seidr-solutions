def select_words(s, n):
    import re
    words = re.findall(r'\w+', s)
    result = []
    for word in words:
        if len(word) == n and word.isalpha():
            result.append(word)
    return result