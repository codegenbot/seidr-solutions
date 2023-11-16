
def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["aaaaaaa", "bb" ,"cc"]) == "aaaaaaa"
    """
    find_max(["name", "of", "string"]) == "string"
    find_max(["name", "enam", "game"]) == "enam"
    max_word = ""
    max_count = 0
    for word in words:
        unique_characters = set(word)
        if len(unique_characters) > max_count:
            max_count = len(unique_characters)
            max_word = word
    return max_word
