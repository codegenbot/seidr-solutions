def indices_of_substring(text, target):
    """
    Given a text string and a target string,
    return a list of integers of the indices at which the target appears in the text.
    Targets may overlap.
    """
    result = []
    pos = 0
    while True:
        found_pos = text.find(target, pos)
        if found_pos == -1:
            break
        result.append(found_pos)
        pos = found_pos + 1
    return result


if __name__ == "__main__":
    text = input("Enter text: ")
    target = input("Enter target: ")
    print(indices_of_substring(text, target))