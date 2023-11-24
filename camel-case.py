def camel_case_conversion(string):
    words = string.split()
    for i in range(len(words)):
        if "-" in words[i]:
            words[i] = ''.join(x.capitalize() or '-' for x in words[i].split('-'))
    return ' '.join(words)