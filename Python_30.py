

def get_positive(l: list):
    """Return only positive numbers in the list.
    >>> get_positive([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]


def count_words(text: str):
    """Return a dictionary with words in the text as keys and their number of occurrences as values.
    >>> count_words("Python is a general-purpose interpreted, interactive, object-oriented, and high-level programming language.")
    {'python': 1, 'is': 1, 'a': 1, 'general-purpose': 1, 'interpreted': 1, 'interactive': 1, 'object-oriented': 1, 'and': 1, 'high-level': 1, 'programming': 1, 'language': 1}
    >>> count_words("I love Python.")
    {'i': 1, 'love': 1, 'python': 1}
    """


def count_vowels(text: str):
    """Return the number of vowels in the text.
    >>> count_vowels("Python is a general-purpose interpreted, interactive, object-oriented, and high-level programming language.")
    31
    >>> count_vowels("I love Python.")
    6
    """


def get_vowels(text: str):
    """Return a list of vowels in the text.
    >>> get_vowels("Python is a general-purpose interpreted, interactive, object-oriented, and high-level programming language.")
    ['o', 'i', 'a', 'e', 'a', 'e', 'a', 'i', 'e', 'o', 'a', 'o', 'i', 'e', 'e', 'i', 'a', 'i', 'e', 'o', 'i', 'e', 'o', 'a', 'e', 'o', 'a', 'i', 'o', 'a']
    >>> get_vowels("I love Python.")
    ['I', 'o', 'e', 'o', 'y']
    """


def get_unique_words(text: str):
    """Return a list of unique words in the text.
    >>> get_unique_words("Python is a general-purpose interpreted, interactive, object-oriented, and high-level programming language.")
    ['python', 'is', 'a', 'general-purpose', 'interpreted', 'interactive', 'object-oriented', 'and', 'high-level', 'programming', 'language']
    >>> get_unique_words("I love Python.")
    ['i', 'love', 'python']
    """


def get_most_frequent_word(text: str):
    """Return the most frequent word in the text.
    >>> get_most_frequent_word("Python is a general-purpose interpreted, interactive, object-oriented, and high-level programming language.")
    'is'
    >>> get_most_frequent_word("I love Python.")
    'python'
    """


def get_longest_word(text: str):
    """Return the longest word in the text.
    >>> get_longest_word("Python is a general-purpose interpreted, interactive, object-oriented, and high-level programming language.")
    'general-purpose'
    >>> get_longest_word("I love Python.")
    'python'
    """
    """
