def indices_of_substring(text, target):
    result = []
    i = 0
    while True:
        pos = text[i:].find(target)
        if pos == -1:
            break
        result.append(i + pos)
        i += pos + 1

    return result

if __name__ == "__main__":
    text = input("Enter the text: ")
    target = input("Enter the target: ")
    print(indices_of_substring(text, target))