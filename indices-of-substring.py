text = input()
target = input()
result = []
i = 0
while i < len(text):
    pos = text.find(target, i)
    if pos != -1:
        result.append(pos)
        i = pos + 1  
    else:
        break 
print(result)