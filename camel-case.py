def camel_case(s):
    return ' '.join(''.join(word.capitalize() for word in group.split()) 
                     if i > 0 else group.replace('-', ' ').capitalize()
                     for i, group in enumerate(s.split('-')))