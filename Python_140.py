def fix_spaces(text):
    text = text.replace(' ', '_')
    return ''.join('_' if i > 1 and text[i-2:i] == ' ' else '_' if text[i] == ' ' else text[i] for i in range(len(text)))