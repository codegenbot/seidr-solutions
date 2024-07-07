```
def camel_case(s):
    return ''.join(word.capitalize() for word in s.split() if word) + ' '.join(word.replace('-', '') for word in s.split('-') if word).strip()

print(camel_case(input()))