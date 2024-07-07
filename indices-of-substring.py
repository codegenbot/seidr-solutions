```
def indices_of_substring(text, target):
    result = []
    start_index = 0
    while start_index < len(text):
        index = text.find(target, start_index)
        if index == -1:
            break
        result.append(index)
        start_index = index + 1
    return result

text = input("Enter the text: ")
target = input("Enter the target string: ")

print(indices_of_substring(text, target))