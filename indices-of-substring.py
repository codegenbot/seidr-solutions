def indices_of_substring():
    text = input("Enter the text: ")
    target = input()
    result = []
    for i, char in enumerate(text):
        if text[i:].startswith(target):
            result.append(i)
    return result