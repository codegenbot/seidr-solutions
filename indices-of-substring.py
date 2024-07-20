def indices_of_substring():
    text = input("Enter the text: ")
    target = input("Enter the target string: ")
    result = []
    for i in range(len(text) - len(target) + 1):
        if text[i:i+len(target)].lower() == target.lower():
            result.append(i)
    return result