import re

def kebab_to_camel(string):
    words = re.split(r'\s|-', string)
    return words[0] + ''.join(word.title() for word in words[1:])