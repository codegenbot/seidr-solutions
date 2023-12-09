
def select_words(s, n):
    words = s.split()
    if n == 1:
        return [words[0]]
    else:
        return [word for word in words if len(word) == n and word.isalpha()]