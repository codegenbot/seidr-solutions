

def count_distinct_characters(string: str) -> int:
    """ Given a string, find out how many distinct characters (regardless of case) does it consist of
    >>> count_distinct_characters('xyzXYZ')
    3
    return len(set(string.lower()))








    """




















    """
    """



























def count_occurrences(string: str, substring: str) -> int:
    """ Given a string and a substring, return the number of occurrences of the
    substring in the string
    >>> count_occurrences('abc', 'abc')
    1
    >>> count_occurrences('abc', 'a')
    1
    >>> count_occurrences('abc', 'b')
    1
    >>> count_occurrences('abc', 'c')
    1
    >>> count_occurrences('abcabc', 'a')
    2
    >>> count_occurrences('abcabc', 'b')
    2
    >>> count_occurrences('abcabc', 'c')
    2
    >>> count_occurrences('abcabcabc', 'a')
    3
    >>> count_occurrences('abcabcabc', 'b')
    3
    >>> count_occurrences('abcabcabc', 'c')
    3
    >>> count_occurrences('abcabcabcabc', 'a')
    4
    >>> count_occurrences('abcabcabcabc', 'b')
    4
    >>> count_occurrences('abcabcabcabc', 'c')
    4
    >>> count_occurrences('abcabcabcabc', 'ab')
    2
    >>> count_occurrences('abcabcabcabc', 'bc')
    2
    >>> count_occurrences('abcabcabcabc', 'abc')
    1
    >>> count_occurrences('abcabcabcabc', 'bca')
    1
    >>> count_occurrences('abcabcabcabc', 'cab')
    1
    >>> count_occurrences('abcabcabcabc', 'abcabc')
    0
    >>> count_occurrences('abcabcabcabc', 'abcabcabc')
    0
    >>> count_occurrences('abcabcabcabc', 'abcabcabcabc')
    1
    >>> count_occurrences('abcabcabcabc', 'z')
    0
    """
    return string.count(substring)


def remove_substring(string: str, substring: str) -> str:
    """ Given a string and a substring, return a new string with all occurrences of the substring removed
    >>> remove_substring('abc', 'a')
    'bc'
    >>> remove_substring('abc', 'b')
    'ac'
    >>> remove_substring('abc', 'c')
    'ab'
    >>> remove_substring('abc', 'ab')
    'c'
    >>> remove_substring('abc', 'bc')
    'a'
    >>> remove_substring('abc', 'abc')
    ''
    >>> remove_substring('abcabc', 'a')
    'bcbc'
    >>> remove_substring('abcabc', 'b')
    'acac'
    >>> remove_substring('abcabc', 'c')
    'abab'
    >>> remove_substring('abcabc', 'ab')
    'cc'
    >>> remove_substring('abcabc', 'bc')
    'aa'
    >>> remove_substring('abcabc', 'abc')
    ''
    """
    return string.replace(substring, '')


def remove_first_and_last_character(string: str) -> str:
    """ Given a string, return the string without the first and last character
    >>> remove_first_and_last_character('abc')
    'b'
    >>> remove_first_and_last_character('abcd')
    'bc'
    >>> remove_first_and_last_character('abcde')
    'bcd'
    >>> remove_first_and_last_character('abcdef')
    'bcde'
    >>> remove_first_and_last_character('abcdefg')
    'bcdef'
    >>> remove_first_and_last_character('abcdefgh')
    'bcdefg'
    >>> remove_first_and_last_character('abcdefghi')
    'bcdefgh'
    >>> remove_first_and_last_character('abcdefghij')
    'bcdefghi'
    >>> remove_first_and_last_character('abcdefghijk')
    'bcdefghij'
    """
    return string[1:-1]


def remove_first_and_last_character_of_all_words(string: str) -> str:
    """ Given a string, return the string without the first and last character of each word
    >>> remove_first_and_last_character_of_all_words('abc')
    'bc'
    >>> remove_first_and_last_character_of_all_words('abcd')
    'bc'
    >>> remove_first_and_last_character_of_all_words('abcde')
    'bcd'
    >>> remove_first_and_last_character_of_all_words('abc def')
    'bc df'
    >>> remove_first_and_last_character_of_all_words('abc def ghi')
    'bc df gh'
    >>> remove_first_and_last_character_of_all_words('abc def ghi jkl')
    'bc df gh jk'
    >>> remove_first_and_last_character_of_all_words('abc def ghi jkl mno')
    'bc df gh jk mn'
    >>> remove_first_and_last_character_of_all_words('abc def ghi jkl mno pqr')
    'bc df gh jk mn pq'
    >>> remove_first_and_last_character_of_all_words('abc def ghi jkl mno pqr stu')
    'bc df gh jk mn pq st'
    """
    return ' '.join([word[1:-1] for word in string.split(' ')])


def remove_first_and_last_character_of_all_words_except_first_and_last(string: str) -> str:
    """ Given a string, return the string without the first and last character of each word except the first and last word
    >>> remove_first_and_last_character_of_all_words_except_first_and_last('abc')
    'abc'
    >>> remove_first_and_last_character_of_all_words_except_first_and_last('abcd')
    'abcd'
    >>> remove_first_and_last_character_of_all_words_except_first_and_last('abcde')
    'abcde'
    >>> remove_first_and_last_character_of_all_words_except_first_and_last('abc def')
    'abc df'
    >>> remove_first_and_last_character_of_all_words_except_first_and_last('abc def ghi')
    'abc df ghi'
    >>> remove_first_and_last_character_of_all_words_except_first_and_last('abc def ghi jkl')
    'abc df ghi jkl'
    >>> remove_first_and_last_character_of_all_words_except_first_and_last('abc def ghi jkl mno')
    'abc df ghi jkl mno'
    >>> remove_first_and_last_character_of_all_words_except_first_and_last('abc def ghi jkl mno pqr')
    'abc df ghi jkl mno pqr'
    >>> remove_first_and_last_character_of_all_words_except_first_and_last('abc def ghi jkl mno pqr stu')
    'abc df ghi jkl mno pqr stu'
    """
    words = string.split(' ')
    return ' '.join(words[0] + [word[1:-1] for word in words[1:-1]] + words[-1])
