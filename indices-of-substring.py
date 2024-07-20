def indices_of_substring():
    text = input("Enter the text: ")
    target = input("Enter the target string: ")
    result = [text.find(target) + 1 for _ in range(len(text))]
    return result