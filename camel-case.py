def camel_case(s):
    words = s.replace("-", " ").split()
    result = [word.capitalize() for i, word in enumerate(words) if i > 0]
    return "".join(word if not i else word[0].upper() + word[1:].lower() for i, word in enumerate(result)).replace(" ", "")