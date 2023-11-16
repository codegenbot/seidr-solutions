
def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["name", "of", "string"]) == "string"
    find_max(["name", "enam", "game"]) == "enam"
    max = 0
    max_word = ''
    for word in words:
        if len(set(word)) > max:
            max = len(set(word))
            max_word = word
    return max_word
    find_max(["aaaaaaa", "bb" ,"cc"]) == "aaaaaaa"
    """
