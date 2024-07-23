def camel_case(s):
    words = s.replace("-", " ").split()
    result = ' '.join(words[0].split('-') + [''.join(word.split()) for word in words[1:]])
    return ''.join([word.capitalize() if i > 0 else word.lower() for i, word in enumerate(result.split())]).strip().replace(" ", "")