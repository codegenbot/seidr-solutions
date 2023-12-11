
def fix_spaces(text):
    """
    Returns a new string where all spaces in the input string have been replaced with underscores.
    """
    import re
    return re.sub(r"\s+", "_", text)