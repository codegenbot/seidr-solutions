def indices_of_substring():
    text = input()
    target = input()  
    result = []
    i = 0
    while True:
        pos = text.find(target, i)
        if pos == -1:
            break
        result.append(pos + 1) 
        i = pos + len(target)  # Start searching from the end of the previous match
    return result