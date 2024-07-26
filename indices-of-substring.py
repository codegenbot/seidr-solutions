i=0
indices=[]
while i<len(text):
    if text[i:i+len(target)]==target:
        indices.append(i)
        i+=len(target)
    else:
        i+=1
for index in indices:
    print(index)