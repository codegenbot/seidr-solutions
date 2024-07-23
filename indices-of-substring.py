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
    if text.find(target, indices[0]+1) != -1:
        print(indices[0]+1, end=" ")