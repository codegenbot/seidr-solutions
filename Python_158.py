
def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["aaaaaaa", "bb" ,"cc"]) == ""aaaaaaa"
    """
    find_max(["name", "of", "string"]) == "string"
    find_max(["name", "enam", "game"]) == "enam"
    max_len = 0
    max_word = ""
    for word in words:
        word_len = len(set(word))
        if word_len > max_len:
            max_word = word
            max_len = word_len
    return max_word
    find_max(["aaaaaaa", "bb" ,"cc"]) == ""aaaaaaa"
    """
