def indices_of_substring(text):
    target = input("Enter the target string: ")
    result = [0]
    for i in range(1, len(text)):
        if text[i:] == target:
            result.append(i)
    return result