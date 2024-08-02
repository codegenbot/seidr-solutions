```
def fix_spaces(text):
    text = text.replace(' ', '_')
    return ''.join(['_' if text[i] == ' ' and i > 0 and text[i-1] == ' ' else '_' if text[i] == ' ' else text[i] for i in range(len(text))]).replace('__', '_-').replace('_ ', '_')