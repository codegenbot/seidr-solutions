def find_indices(text, target):
    result = []
    i = 0
    while True:
        pos = text.find(target, i)
        if pos == -1:
            break
        result.append(pos) 
        i = pos + 1
    return result

text = input()
target = input()  
print(find_indices(text, target))