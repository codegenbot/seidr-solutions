def sort_third(l: list):
    return [sorted(l[i*3:(i*3)+3]) if (i+1) % 3 == 0 and (i*3)+3 <= len(l) else sorted(l[i*3:]) for i in range(len(l)//3)]