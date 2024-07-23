text = input()
target = input()

indices = []
start = 0

while start < len(text):
    index = text.find(target, start)
    
    if index == -1:
        break
    
    indices.append(index)
    start = index + 1

for index in indices:
    print(index, end=" ")
    
if len(indices) == 1:
    if text.find(target, index + 1) != -1: 
        print(index + 1, end=" ")