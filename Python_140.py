```
def fix_spaces(text):
    new_text = text.replace(' ', '_')
    return new_text.join('-' if i < len(new_text) - 1 and new_text[i] == new_text[i+1] == '_' else '_' for i in range(len(new_text)-1)).replace('__', '_-')