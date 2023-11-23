text=input()
target=input()
indices=[i for i in range(len(text)) if text.find(target,i)!=-1]
print(*[i+1 for i in indices])