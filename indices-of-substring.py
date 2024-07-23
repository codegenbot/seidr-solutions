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

for i in range(len(indices)):
    print(indices[i], end=" ")
    
    if i < len(indices) - 1 and indices[i] + 1 != indices[i + 1]:
        print(indices[i] + 1, end=" ")