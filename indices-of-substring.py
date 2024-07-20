def indices_of_substring():
    text = input("Enter the text: ")
    target = input("Enter the target string: ")
    result = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)].lower() == target.lower():
            result.append(i)
            i += len(target)
        else:
            i += 1
    return result