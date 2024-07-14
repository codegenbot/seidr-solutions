```
def camel_case(s):
    if '-' in s:
        words = s.split('-')
        result = words[0].capitalize()
        for word in words[1:]:
            result += word.capitalize()
    else:
        result = s.replace('-', '').capitalize().capitalize()
    return result

print(camel_case("nospaceordash")) 
print(camel_case("two-words")) 
print(camel_case("two words")) 
print(camel_case("all separate words"))