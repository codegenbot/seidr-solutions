def select_words(s, n):
    selected = set()
    for word in s.split():
        if len(word) == n and word not in selected and word.isalpha():
            selected.add(word)
    return list(selected)