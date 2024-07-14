```
def camel_case(s):
    return ''.join(word.capitalize() for word in s.split() if word) + ''.join(w[0].upper() + w[1:] for w in s.split('-') if len(w)>1)

print(camel_case(input()))