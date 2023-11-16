
import os


def histogram(test):
    """Given a string representing a space separated lowercase letters, return a dictionary
    of the letter with the most repetition and containing the corresponding count.
    If several letters have the same occurrence, return all of them.
    
    Example:
    histogram('a b c') == {'a': 1, 'b': 1, 'c': 1}
    histogram('a b b a') == {'a': 2, 'b': 2}
    histogram('a b c a b') == {'a': 2, 'b': 2}
    histogram('b b b b a') == {'b': 4}
    histogram('') == {}



def find_char(test):
    """Given a string representing a sentence, return the character that appears the most
    and the number of occurrences.
    Example:
    find_char('a') == ('a', 1)
    find_char('aabbc') == ('a', 2)
    find_char('aabbcc') == ('a', 2)
    find_char('aabbccdd') == ('a', 2)
    find_char('aabbccddee') == ('a', 2)
    find_char('aabbccddeeff') == ('a', 2)
    find_char('aabbccddeeffgg') == ('a', 2)
    find_char('aabbccddeeffgghh') == ('a', 2)
    find_char('aabbccddeeffgghhii') == ('a', 2)
    find_char('aabbccddeeffgghhiijj') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkk') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkll') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkllmm') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkllmmnn') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkllmmnnoo') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkllmmnnoopp') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkllmmnnooppqq') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkllmmnnooppqqrr') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkllmmnnooppqqrrsstt') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvv') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxx') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz') == ('a', 2)
    find_char('aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz') == ('a', 2)

    """


def find_files(test):
    """Given a string representing a path to a directory, return a list of all files
    in the directory.
    Example:
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']
    find_files('/home/') == ['/home/file1', '/home/file2', '/home/file3']

    """
