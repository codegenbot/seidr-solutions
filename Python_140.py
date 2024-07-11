def fix_spaces(text):
    return ''.join(['_' if text[i] == ' ' and (i == len(text) - 1 or text[i + 1] != ' ') else text[i] for i in range(len(text))])