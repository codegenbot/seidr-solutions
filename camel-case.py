import re

def kebab_to_camel(kebab_str):
    words = kebab_str.split(' ')
    camel_words = []
    for word in words:
        if '-' in word:
            camel_word = ''.join(x.capitalize() or '-' for x in word.split('-'))
            camel_words.append(camel_word)
        else:
            camel_words.append(word)
    return ' '.join(camel_words)