def find_indices(text, target):
    result = []
    i = 0
    while True:
        pos = text.find(target, i)
        if pos == -1:
            break
        result.append(pos) 
        i = pos + len(target)

    return result

text = input("Enter the text: ")
target = input("Enter the target string: ")

print(find_indices(text, target))