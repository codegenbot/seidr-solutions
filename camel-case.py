def camel_case(s):
    words = s.replace("-", " ").split()
    return words[0].lower() + ''.join(word.capitalize() for word in words[1:]).replace(" ", "").strip()