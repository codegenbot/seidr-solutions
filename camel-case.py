def camel_case(s):
    words = s.replace("-", " ").split()
    result = ' '.join(map(lambda x: x.title(), filter(None, words)))