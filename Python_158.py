
def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["name", "of", "string"]) == "string"
    find_max(["name", "enam", "game"]) == "enam"

    unique_words = []
    for word in words:
        if word not in unique_words:
            unique_words.append(word)

    return unique_words

    pass
    find_max(["aaaaaaa", "bb" ,"cc"]) == ""aaaaaaa"
    """
