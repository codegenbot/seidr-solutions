def camel_case(s):
    words = s.replace("-", " ").split()
    result = ""
    for i, word in enumerate(words[0].split("-") + words[1:]):
        if i > 0:
            result += word.capitalize()
        else:
            result += word.lower()
    return ''.join([word[0].upper() + word[1:] if i > 0 else word for i, word in enumerate(result.split())]).strip().replace(" ", "")