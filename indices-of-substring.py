def indices_of_substring():
    text = input()
    target = input()
    result = []
    i = 0
    while i < len(text):
        pos = text.find(target, i)
        if pos != -1:
            result.append(pos)
            i = pos + len(target)  
        else:
            break 
    return result