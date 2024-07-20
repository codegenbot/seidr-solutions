def indices_of_substring():
    target = input()
    result = []
    for i in range(len(input("Enter the text: "))):
        if input("Enter the text: ")[i:].startswith(target):
            result.append(i)
    return result