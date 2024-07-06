def camel_case(s):
    result = ""
    words = s.replace("-", " ").split()
    for i in range(len(words)):
        if "-" in words[i]:
            parts = words[i].split("-")
            if i > 0:
                result += words[i - 1].capitalize() + ""
            result += parts[0]
            for j in range(1, len(parts)):
                result += parts[j][0].upper() + parts[j][1:].lower()
        else:
            if i > 0:
                result += words[i - 1].capitalize() + ""
            result += words[i].capitalize()
    return result


s = input()
print(camel_case(s))