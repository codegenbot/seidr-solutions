def camel_case(s):
    result = s.split()[0].replace('-', '').capitalize()
    for w in s.split()[1:]:
        result += w.replace('-', '').capitalize().upper()
    return result