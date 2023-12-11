def camel_case(s):
    return ''.join([word.title() for word in s.split('-')])
