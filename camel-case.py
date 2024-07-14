def camel_case(s):
    if ' ' in s:
        words = s.split()
        result = [words[0]]
        for word in words[1:]:
            result.append(word.capitalize())
        return ''.join(result)
    else:
        return s.replace('-', '').capitalize()