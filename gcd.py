def indices_of_substring(text, target):
    result = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            result.append(pos)
            start = pos + 1
        else:
            break
    return result


def find_indices():
    text = input("Enter the text: ")
    target = input("Enter the target string: ")
    print(f"Indices of '{target}' in '{text}': {indices_of_substring(text, target)}")


find_indices()