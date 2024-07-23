Here is the solution:

def camel_case(s):
    result = []
    for word in s.split():
        if '-' in word:
            result.append(word.capitalize())
        else:
            result.append(word)
    return ''.join(result).replace('-', '').capitalize() + ''.join(word.title() for word in result[1:]).lower()