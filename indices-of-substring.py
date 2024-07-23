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
    while text.find(target, indices[0]+1) != -1:
        additional_index = text.find(target, indices[0]+1)
        print(additional_index, end=" ")
        indices[0] = additional_index