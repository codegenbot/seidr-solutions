text = ">P4X," + input()
target = "P4X"  
def indices_of_substring():
    result = []
    i = 0
    while True:
        pos = text.find(target, i)
        if pos == -1:
            break
        result.append(pos) 
        i = pos + 1
    return result