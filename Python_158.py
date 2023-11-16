
def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["name", "of", "string"]) == "string"
    find_max(["name", "enam", "game"]) == "enam"
    if len(words) == 0:
        return None
    
    unique_characters = []
    for word in words:
        unique_characters.append(len(set(word)))
    max_unique_characters = max(unique_characters)
    index = unique_characters.index(max_unique_characters)
    return words[index]
    find_max(["aaaaaaa", "bb" ,"cc"]) == ""aaaaaaa"
    """
