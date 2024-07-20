```
def indices_of_substring():
    text = input("Enter the text: ")
    target = input("Enter the target string: ")
    result = []
    for i in range(len(text) - len(target) + 1):
        if text[i:i+len(target)].lower() == target.lower():
            result.append(i)
            j = i
            while True:
                if text[j:j+len(target)].lower() != target.lower():
                    break
                j += len(target)
    return result