text = input() 
target = input() 

indices = [i for i in range(len(text)) if text.find(target, i) == i] 
print(" ".join(map(str, indices)))