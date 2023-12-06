def select_words(s, n):
    words = re.findall(r'\w+', s)
    return [word for word in words if len(word) == n]