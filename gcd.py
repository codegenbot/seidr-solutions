```
def find_indices(text, target):
    result = []
    pos = 0
    while pos < len(text):
        pos = text.find(target, pos)
        if pos != -1:
            result.append(pos)
            pos += len(target)  
        else:
            break
    return result

text = input("Enter the text: ")
target = input("Enter the target string: ")
print(find_indices(text, target))