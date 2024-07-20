def camel_case(s):
    result = s.split()[0].replace('-', '').capitalize()
    if result:
        result += word.replace('-', '').capitalize().upper()[:1]
    else:
        result = word.replace('-', '').capitalize().upper()
    for word in s.split()[1:]:
        result += word.replace('-', '').capitalize().upper()
    return result