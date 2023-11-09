
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
    for i in range(len(text)):
        if text[i] == ' ':
            text = text[:i] + '_' + text[i+1:]
    for j in range(len(text)):
        if text[j] == ' ' and text[j+1] == ' ':
            text = text[:j] + '-' + text[j+2:]
    return text
