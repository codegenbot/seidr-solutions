def indices_of_substring():
    text = input("Enter the main text: ")
    target = input("Enter the target string: ")
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return list(set(result))