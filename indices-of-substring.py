def indices_of_substring(text, target):
    result = [text.find(target, i) for i in range(len(text)) if (t:=text.find(target, i)) != -1]
    return result