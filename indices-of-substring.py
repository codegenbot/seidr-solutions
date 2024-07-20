def indices_of_substring():
    text = input("Enter the text: ")
    target = input("Enter the target string: ")
    return [i for i in range(len(text)) if text[i:].find(target) != -1]