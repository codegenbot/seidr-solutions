Here is the completed code:

def kebab_to_camel(s):
    return ''.join(word.capitalize() for word in s.split('-')) + ' '.join(part.strip().capitalize() for part in s.split())

print(kebab_to_camel('nospaceordash'))
print(kebab_to_camel('two-words'))
print(kebab_to_camel('two words'))
print(kebab_to_camel('all separate words'))