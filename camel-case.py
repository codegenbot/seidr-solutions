def camel_case(s):
    words = s.replace("-", " ").split()
    result = ''.join([word.capitalize() if i > 0 else word.lower().replace('-', '') for i, word in enumerate(words)])
    return result