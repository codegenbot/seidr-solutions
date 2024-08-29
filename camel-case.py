def kebab_to_camel(s):
    return ' '.join(word.capitalize() for word in s.split()) if s.find(' ') != -1 else ''.join(word.capitalize() for word in s.split('-'))