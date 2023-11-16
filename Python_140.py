
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
    # Replace all spaces with underscores
    text = text.replace(' ', '_')
    # Replace all consecutive spaces with -
    text = text.replace('__', '-')
    return text


def remove_duplicates(text):
    """
    Given a string text, remove all consecutive duplicate characters, 
    except the first one.
    
    remove_duplicates("Example") == "Example"
    remove_duplicates("Example 1") == "Example 1"
    remove_duplicates("Example  1") == "Example 1"
    remove_duplicates("Example   1") == "Example 1"
    remove_duplicates("Example 1 1") == "Example 1 1"
    """
    # Remove all consecutive duplicate characters, except the first one
    text = text.replace(' ', ' ')
    return text


def reverse_words(text):
    """
    Given a string text, reverse the order of the words in it.
    
    reverse_words("Example") == "Example"
    reverse_words("Example 1") == "1 Example"
    reverse_words("Example 1 2") == "2 1 Example"
    reverse_words("Example 1 2 3") == "3 2 1 Example"
    """
    # Reverse the order of the words in the text
    text = text.split()
    text.reverse()
    text = ' '.join(text)
    return text


def reverse_words_and_characters(text):
    """
    Given a string text, reverse the order of the words in it and 
    reverse the characters in each word.
    
    reverse_words_and_characters("Example") == "elpmaxE"
    reverse_words_and_characters("Example 1") == "1 elpmaxE"
    reverse_words_and_characters("Example 1 2") == "2 1 elpmaxE"
    reverse_words_and_characters("Example 1 2 3") == "3 2 1 elpmaxE"
    """
    # Reverse the order of the words in the text
    text = text.split()
    text.reverse()
    # Reverse the characters in each word
    text = ' '.join(text)
    text = text[::-1]
    return text


def reverse_words_and_characters_2(text):
    """
    Given a string text, reverse the order of the words in it and 
    reverse the characters in each word.
    
    reverse_words_and_characters_2("Example") == "elpmaxE"
    reverse_words_and_characters_2("Example 1") == "1 elpmaxE"
    reverse_words_and_characters_2("Example 1 2") == "2 1 elpmaxE"
    reverse_words_and_characters_2("Example 1 2 3") == "3 2 1 elpmaxE"
    """
    # Reverse the order of the words in the text
    text = text.split()
    text.reverse()
    # Reverse the characters in each word
    text = ' '.join(text)
    text = ''.join(reversed(text))
    return text


def reverse_words_and_characters_3(text):
    """
    Given a string text, reverse the order of the words in it and 
    reverse the characters in each word.
    
    reverse_words_and_characters_3("Example") == "elpmaxE"
    reverse_words_and_characters_3("Example 1") == "1 elpmaxE"
    reverse_words_and_characters_3("Example 1 2") == "2 1 elpmaxE"
    reverse_words_and_characters_3("Example 1 2 3") == "3 2 1 elpmaxE"
    """
    # Reverse the order of the words in the text
    text = text.split()
    text.reverse()
    # Reverse the characters in each word
    text = ' '.join(text)
    text = ''.join(reversed(text))
    return text


def reverse_words_and_characters_4(text):
    """
    Given a string text, reverse the order of the words in it and 
    reverse the characters in each word.
    
    reverse_words_and_characters_4("Example") == "elpmaxE"
    reverse_words_and_characters_4("Example 1") == "1 elpmaxE"
    reverse_words_and_characters_4("Example 1 2") == "2 1 elpmaxE"
    reverse_words_and_characters_4("Example 1 2 3") == "3 2 1 elpmaxE"
    """
    # Reverse the order of the words in the text
    text = text.split()
    text.reverse()
    # Reverse the characters in each word
    text = ' '.join(text)
    text = text[::-1]
    return text


def reverse_words_and_characters_5(text):
    """
    Given a string text, reverse the order of the words in it and 
    reverse the characters in each word.
    
    reverse_words_and_characters_5("Example") == "elpmaxE"
    reverse_words_and_characters_5("Example 1") == "1 elpmaxE"
    reverse_words_and_characters_5("Example 1 2") == "2 1 elpmaxE"
    reverse_words_and_characters_5("Example 1 2 3") == "3 2 1 elpmaxE"
    """
    # Reverse the order of the words in the text
    text = text.split()
    text.reverse()
    # Reverse the characters in each word
    text = ' '.join(text)
    text = ''.join(reversed(text))
    return text
