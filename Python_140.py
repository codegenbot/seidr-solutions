
def fix_spaces(text):
    """
    Given a string text, replace all spaces in it with underscores, 
    and if a string has more than 2 consecutive spaces, 
    then replace all consecutive spaces with - 
    
    fix_spaces("Example") == "Example"
    fix_spaces("Example 1") == "Example_1"
    fix_spaces(" Example 2") == "_Example_2"
    fix_spaces(" Example   3") == "_Example-3"
    """
    
    # YOUR CODE HERE
    return text


def get_sentences(text):
    """
    Given a string text, return a list of sentences in it.
    Each sentence is a substring of the original string.
    The list should not contain empty strings.

    get_sentences("Example 1. Example 2.") == ["Example 1.", "Example 2."]
    get_sentences("This is a sentence. This is another sentence.") == ["This is a sentence.", "This is another sentence."]
    get_sentences("This is a sentence.") == ["This is a sentence."]
    """
    
    # YOUR CODE HERE
    return text


def get_paragraphs(text):
    """
    Given a string text, return a list of paragraphs in it.
    Each paragraph is a substring of the original string.
    The list should not contain empty strings.

    get_paragraphs("This is a paragraph.") == ["This is a paragraph."]
    get_paragraphs("This is a paragraph.\n\nThis is another paragraph.") == ["This is a paragraph.", "This is another paragraph."]
    get_paragraphs("This is a paragraph.\n\n\nThis is another paragraph.") == ["This is a paragraph.", "This is another paragraph."]
    """
    
    # YOUR CODE HERE
    return text


def get_words(text):
    """
    Given a string text, return a list of words in it.
    Each word is a substring of the original string.
    The list should not contain empty strings.

    get_words("This is a sentence.") == ["This", "is", "a", "sentence."]
    get_words("This is a sentence. ") == ["This", "is", "a", "sentence."]
    get_words(" This is a sentence.") == ["This", "is", "a", "sentence."]
    get_words("This is a sentence.  ") == ["This", "is", "a", "sentence."]
    """
    
    # YOUR CODE HERE
    return text


def get_words_in_file(filename):
    """
    Given a filename, return a list of words in it.
    Each word is a substring of the original string.
    The list should not contain empty strings.

    get_words_in_file("file") == ["This", "is", "a", "sentence."]
    get_words_in_file("file") == ["This", "is", "a", "sentence."]
    get_words_in_file("file") == ["This", "is", "a", "sentence."]
    get_words_in_file("file") == ["This", "is", "a", "sentence."]
    """
    
    # YOUR CODE HERE
    return text


def get_words_in_files(filenames):
    """
    Given a list of filenames, return a list of words in all of them.
    Each word is a substring of the original string.
    The list should not contain empty strings.

    get_words_in_files(["file"]) == ["This", "is", "a", "sentence."]
    get_words_in_files(["file"]) == ["This", "is", "a", "sentence."]
    get_words_in_files(["file"]) == ["This", "is", "a", "sentence."]
    get_words_in_files(["file"]) == ["This", "is", "a", "sentence."]
    """
    
    # YOUR CODE HERE
    return text


def get_words_in_files_in_directory(directory):
    """
    Given a directory, return a list of words in all the files in it.
    Each word is a substring of the original string.
    The list should not contain empty strings.

    get_words_in_files_in_directory("directory") == ["This", "is", "a", "sentence."]
    get_words_in_files_in_directory("directory") == ["This", "is", "a", "sentence."]
    get_words_in_files_in_directory("directory") == ["This", "is", "a", "sentence."]
    get_words_in_files_in_directory("directory") == ["This", "is", "a", "sentence."]
    """
    
    # YOUR CODE HERE
    return text
