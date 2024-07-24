def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)].lower() == target.lower():
            result.append(str(i))
    return [int(x) for x in result] if result else ["0"]