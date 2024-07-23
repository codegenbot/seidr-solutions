def indices_of_substring(text, target):
    result = []
    pos = 0
    while pos < len(text):
        pos = text.find(target, pos)
        if pos == -1:
            break
        result.append(pos)  
        pos += len(target)

    return result

if __name__ == "__main__":
    text = input("Enter your text: ")
    target = input("Enter your target string: ")
    print(indices_of_substring(text, target))