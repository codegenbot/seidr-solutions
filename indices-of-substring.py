def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text.startswith(target, i)]

text = input("Enter the text: ")
target = input("Enter the target string: ")
print(indices_of_substring(text, target))