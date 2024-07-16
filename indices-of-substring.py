```
def indices_of_substring():
    text = input()
    target = input()
    result = []
    i = 0
    while i < len(text):
        pos = text.find(target, i)
        if pos != -1:
            while i < len(text) and text[i:i+len(target)] == target:
                result.append(i)
                i += 1  
        else:
            break 
    return result