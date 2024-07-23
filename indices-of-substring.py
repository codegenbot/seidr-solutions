```Python
def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        pos = text.find(target, i)
        if pos != -1:
            result.append(pos + 1) 
    return result

text = input("Enter the text: ")
target = input("Enter the target string: ")
print(indices_of_substring(text, target))