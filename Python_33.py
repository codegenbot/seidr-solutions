return [i if i % 3 != 0 else sorted([j for j in l if j % 3 == 0])[(i // 3) % len(sorted([j for j in l if j % 3 == 0]))] 
    for i in range(len(l))