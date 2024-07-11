```
def camel_case(s):
    words = s.split(" ")
    result = [words[0]]
    for i in range(1, len(words)):
        result.append(word.capitalize().lstrip("-") for word in words[i].split("-"))
    return "".join(map(str.capitalize, ' '.join(result)))