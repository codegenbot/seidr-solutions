
def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["name", "of", "string"]) == "string"
    find_max(["aaaaaaa", "bb" ,"cc"]) == "aaaaaaa"
    """
    find_max(["name", "enam", "game"]) == "enam"
    # Complete the following code given the task description and function signature.
    max_word = words[0]
    max_num = len(set(words[0]))
    for word in words[1:]:
        if max_num < len(set(word)):
            max_word = word
            max_num = len(set(word))
    return max_word
    find_max(["aaaaaaa", "bb" ,"cc"]) == "aaaaaaa"
    """
