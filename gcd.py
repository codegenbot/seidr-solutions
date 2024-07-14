```
def find_indices(text, target):
    result = []
    i = 0
    while i < len(text):
        pos = text.find(target, i)
        if pos != -1:
            result.append(pos)
            i = pos + 1
        else:
            break
    print(f"Indices: {result}")
    return result

text = input("Enter the text: ")
target = input("Enter the target string: ")
find_indices(text, target)