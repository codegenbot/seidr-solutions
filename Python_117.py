def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        if sum(1 for char in word.lower() if not char.isalpha() or char in "aeiou") != n:
            continue
        result.append(word)
    return result