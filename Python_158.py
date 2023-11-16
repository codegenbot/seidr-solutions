
def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["name", "of", "string"]) == "string"
    find_max(["name", "enam", "game"]) == "enam"
    if len(words) == 0:
        return ""

    max_word = words[0]
    max_count = len(set(words[0]))

    for word in words[1:]:
        count = len(set(word))

        if count > max_count:
            max_count = count
            max_word = word
        elif count == max_count and word < max_word:
            max_word = word

    return max_word
    find_max(["aaaaaaa", "bb" ,"cc"]) == ""aaaaaaa"
    """
