def find_max():
    words = input("Enter words (comma separated): ").split(',')
    max_word = ""
    max_unique_chars = 0
    for word in words:
        unique_chars = set(word.strip())
        if len(unique_chars) > max_unique_chars or (len(unique_chars) == max_unique_chars and word < max_word):
            max_word = word
            max_unique_chars = len(unique_chars)
    return max_word

print(find_max())