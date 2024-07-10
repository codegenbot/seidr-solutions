def indices_of_substring(text, target):
    result = []
    i = 0
    while True:
        i = text.find(target, i)
        if i == -1: 
            break
        result.append(i)
        i += len(target)
    return result

print(indices_of_substring('/d8qL>/d|/d>/d->/', '|/>/d'))