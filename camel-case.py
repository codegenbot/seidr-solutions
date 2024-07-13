Here's the solution:

def camel_case(s):
    return ''.join(word.capitalize() for word in s.split()) if '-' not in s else ' '.join((word[0].upper() + word[1:] for word in s.split('-')))

print(camel_case(input()))