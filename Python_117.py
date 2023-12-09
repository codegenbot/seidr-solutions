def select_words(s, n):
    words = s.split()
    return [word for word in words if len(word) == n and re.match(r'^\w+$', word)]